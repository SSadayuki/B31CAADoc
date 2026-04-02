/* -*-c++-*- */
#ifndef CATIGSMUseExtractMulti_H
#define CATIGSMUseExtractMulti_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATGSMUseItfExportedBy.h"
#include "CATIMmiMechanicalFeature.h"
#include "CATLISTV_CATIMmiMechanicalFeature.h"
#include "CATIGSMExtractSolideDef.h"

class CATICkeParm_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUseExtractMulti;
#else
extern "C" const IID IID_CATIGSMUseExtractMulti;
#endif

/**
* Interface to extract solid feature. 
* <b>Role</b>: Allows you to access data of a solid extracted. 
* @see CATIGSMUseFactory#CreateExtractMulti
*/

class ExportedByCATGSMUseItf CATIGSMUseExtractMulti : public CATBaseUnknown
{
    CATDeclareInterface;
    
public: 
    /**
    * Gets referenced solid feature.
    *   @return solid feature 
    */ 
    virtual CATIMmiMechanicalFeature_var GetElem(const int iPosition) = 0;
    
    /**
    * Sets solid element to extract a BRep feature from.
    *   @param iElem
    *      solid feature
    */ 
    virtual HRESULT SetElem(const CATIMmiMechanicalFeature_var iElem, const int iPosition) = 0;
    
    /**
    * Gets propagation type of the extract operation.
    *   @return
    *      the type
    *   @see CATIGSMExtractSolidePropag
    */ 
    virtual CATIGSMExtractSolidePropag GetExtractPropagType (const int iPosition) = 0;
    
    /**
    * Sets propagation type of the extract operation.
    *   @param iType
    *      Propagation type of the extract operation
    *   @see CATIGSMExtractSolidePropag  
    */ 
    virtual HRESULT SetExtractPropagType (const CATIGSMExtractSolidePropag iType, const int iPosition) = 0;
    
    /**
    * Sets the complementary mode.
    *   @param IComplementaire
    *      Complementary mode (CATTrue / CATFalse)
    *   @see CATBoolean
    */ 
    virtual HRESULT SetComplementaryExtract (CATBoolean iComplementaire, const int iPosition) = 0;
    
    /**
    * Gets the complementary mode.
    *   @return CATBoolean
    *   @see CATBoolean
    */ 
    virtual CATBoolean GetComplementaryExtract (const int iPosition) = 0;
    
    /**
    * Gets the federation mode.
    *   @param IsFederated
    *      CATTrue  : Result is federated.
    *      CATFalse : Result is not federated.
    *   @param iPosition 
    *      Position 
    *   @see CATBoolean
    */ 
    virtual HRESULT GetIsFederated(CATBoolean& IsFederated, const int iPosition) = 0;

	/**
    * Sets the federation mode.
    *   @param IsFederated
    *      CATTrue  : Result is federated.
    *      CATFalse : Result is not federated.
    *   @param iPosition 
    *      Position 
    *   @see CATBoolean
    */ 
    virtual HRESULT SetIsFederated(const CATBoolean IsFederated, const int iPosition) = 0;
    
    /**
    * Gets the curvature deviation threshold literal feature.
    * <br> Note: This threshold is  a ratio between 0 and 1
    * <br>  if sets to 0, all curvature discontinuities are smoothed.
    * <br>  if sets to 1, no curvature discontinuity is smoothed.
    *   @param Elem
    *      curvature deviation threshold literal feature
    *   @param iPosition 
    *      Position 
    */
    virtual HRESULT GetCurvatureThreshold(CATICkeParm_var & Elem, const int iPosition) = 0;
    
    /**
    * Gets the curvature deviation threshold value. 
    * <br>This threshold is a ratio between 0 and 1.
    * <br>  if sets to 0, all curvature discontinuities are smoothed.
    * <br>  if sets to 1, no curvature discontinuity is smoothed.
    *   @param val
    *      curvature deviation threshold value
    *   @param iPosition 
    *      Position 
    */
    virtual HRESULT GetCurvatureThreshold(double & val, const int iPosition) = 0;
    
    /**
    * Sets the curvature deviation threshold literal feature.
    * <br> Note: This threshold is a ratio between 0 and 1.
    * <br>  if sets to 0, all curvature discontinuities are smoothed.
    * <br>  if sets to 1, no curvature discontinuity is smoothed.
    *   @param Elem
    *      curvature deviation threshold literal feature
    *   @param iPosition 
    *      Position 
    */
    virtual HRESULT SetCurvatureThreshold(const CATICkeParm_var Elem, const int iPosition) = 0;
    
    /**
    * Sets the curvature deviation threshold value. 
    * <br>This threshold is a ratio between 0 and 1
    * <br> if sets to 0, all curvature discontinuities are smoothed
    * <br> if sets to 1, no curvature discontinuity is smoothed.
    *   @param val
    *      curvature deviation threshold value
    *   @param iPosition 
    *      Position 
    */
    virtual HRESULT SetCurvatureThreshold(const double val, const int iPosition) = 0;
    
    /**
    * Gets the curvature deviation threshold activity (whether it is taken into
    * account or not). 
    * <br>This activity is a CATBoolean (CATTrue or CATFalse).
    *   @param bAct
    *      Curvature deviation threshold activity
    *   @param iPosition 
    *      Position 
    *   @see CATBoolean
    */
    virtual HRESULT GetCurvatureThresholdActivity(CATBoolean & bAct, const int iPosition) = 0;
    
    /**
    * Sets the curvature deviation threshold activity (whether it is taken into
    * account or not). 
    * <br>This activity is a CATBoolean (CATTrue or CATFalse).
    *   @param bAct
    *      Curvature deviation threshold activity
    *   @param iPosition 
    *      Position 
    *   @see CATBoolean
    */
    virtual HRESULT SetCurvatureThresholdActivity(const CATBoolean bAct, const int iPosition) = 0;
    
    /**
    * Gets the list of constraints.
    *   @param oListOfConstraints
    *     The list of constraints 
    */
    virtual HRESULT GetListOfConstraints(CATLISTV(CATIMmiMechanicalFeature_var)	& oListOfConstraints) = 0;
    
    /**
    * Gets the number of elements in the list of constraints.
    *   @param oNbOfConstraints
    *     The number of elements in the list of constraints 
    */
    virtual HRESULT GetNbOfConstraints(int	& oNbOfConstraints) = 0;
    
    /**
    * @deprecated V5R16 CATIGSMUseExtractMulti#AddConstraintTolerant
    * Adds a constraint to the list. 
    *   @param iConstraint 
    *     The constraint 
    *   @param iType 
    *     type of constraint 
    *   @param iComplementaire 
    *     Complementary mode 
    *   @param isFederate 
    *     Federate or not 
    *   @param CurElem
    *      curvature deviation threshold literal feature
    *   @param iPosition 
    *      Position 
    *   @see CATBoolean
    */
    virtual HRESULT AddConstraint(const CATIMmiMechanicalFeature_var iConstraint, const CATIGSMExtractSolidePropag iType, const CATBoolean iComplementaire,
        const int IsFederated, const CATICkeParm_var CurElem, const int iPosition) = 0;
    
    /**
    * Adds a constraint to the list. 
    *   @param iConstraint 
    *     The constraint 
    *   @param iType 
    *     type of constraint 
    *   @param iComplementaire 
    *     Complementary mode 
    *   @param isFederate 
    *     Federate or not 
    *   @param DisElem
    *      distance threshold literal feature
    *   @param AngElem
    *      angular threshold literal feature
    *   @param CurElem
    *      curvature deviation threshold literal feature
    *   @param iPosition 
    *      Position 
    *   @see CATBoolean
    */
    virtual HRESULT AddConstraintTolerant(const CATIMmiMechanicalFeature_var iConstraint, const CATIGSMExtractSolidePropag iType, const CATBoolean iComplementaire,
        const int IsFederated, const CATICkeParm_var DisElem, const CATICkeParm_var AngElem, const CATICkeParm_var CurElem, 
		const int iPosition) = 0;
    
    /**
    * Removes a constraint to the list. 
    *   @param iRank 
    *     rank 
    */
    virtual HRESULT RemoveConstraint (int iRank) = 0;
    
    /**
    * Replaces solid element to extract a BRep feature from .
    *   @param iElemToReplace
    *          Elem to replace 
    *   @param iNewElem 
    *          to replace by NewElem 
    *   @param iPosition 
    *      Position 
    */ 
    virtual HRESULT ReplaceElem(const CATIMmiMechanicalFeature_var iElemToReplace, const CATIMmiMechanicalFeature_var iNewElem, const int iPosition) = 0;

    /**
    * Gets the distance threshold literal feature.
    * <br> Note: This threshold is a Lenght.
    *   @param Elem
    *      distance threshold literal feature
    *   @param iPosition 
    *      Position 
    */
    virtual HRESULT GetDistanceThreshold(CATICkeParm_var & Elem, const int iPosition) = 0;
    
    /**
    * Gets the distance threshold value. 
    * <br>This threshold is a Lenght.
     *   @param val
    *      distance threshold value
    *   @param iPosition 
    *      Position 
    */
    virtual HRESULT GetDistanceThreshold(double & val, const int iPosition) = 0;
    
    /**
    * Sets the distance threshold literal feature.
    * <br> Note: This threshold is a Lenght.
    *   @param Elem
    *      distance threshold literal feature
    *   @param iPosition 
    *      Position 
    */
    virtual HRESULT SetDistanceThreshold(const CATICkeParm_var Elem, const int iPosition) = 0;
    
    /**
    * Sets the distance threshold value. 
    * <br>This threshold is a Lenght.
    *   @param val
    *      distance threshold value
    *   @param iPosition 
    *      Position 
    */
    virtual HRESULT SetDistanceThreshold(const double val, const int iPosition) = 0;
    
    /**
    * Gets the distance threshold activity (whether it is taken into
    * account or not). 
    * <br>This activity is a CATBoolean (CATTrue or CATFalse).
    *   @param bAct
    *      distance threshold activity
    *   @param iPosition 
    *      Position 
    *   @see CATBoolean
    */
    virtual HRESULT GetDistanceThresholdActivity(CATBoolean & bAct, const int iPosition) = 0;
    
    /**
    * Sets the distance threshold activity (whether it is taken into
    * account or not). 
    * <br>This activity is a CATBoolean (CATTrue or CATFalse).
    *   @param bAct
    *      distance threshold activity
    *   @param iPosition 
    *      Position 
    *   @see CATBoolean
    */
    virtual HRESULT SetDistanceThresholdActivity(const CATBoolean bAct, const int iPosition) = 0;

    /**
    * Gets the angular threshold literal feature.
    * <br> Note: This threshold is an angle.
    *   @param Elem
    *      angular threshold literal feature
    *   @param iPosition 
    *      Position 
    */
    virtual HRESULT GetAngularThreshold(CATICkeParm_var & Elem, const int iPosition) = 0;
    
    /**
    * Gets the angular threshold value. 
    * <br>This threshold is an angle.
     *   @param val
    *      angular threshold value
    *   @param iPosition 
    *      Position 
    */
    virtual HRESULT GetAngularThreshold(double & val, const int iPosition) = 0;
    
    /**
    * Sets the distance threshold literal feature.
    * <br> Note: This threshold is an angle.
    *   @param Elem
    *      angular threshold literal feature
    *   @param iPosition 
    *      Position 
    */
    virtual HRESULT SetAngularThreshold(const CATICkeParm_var Elem, const int iPosition) = 0;
    
    /**
    * Sets the angular threshold value. 
    * <br>This threshold is an angle.
    *   @param val
    *      angular threshold value
    *   @param iPosition 
    *      Position 
    */
    virtual HRESULT SetAngularThreshold(const double val, const int iPosition) = 0;
    
    /**
    * Gets the angular threshold activity (whether it is taken into
    * account or not). 
    * <br>This activity is a CATBoolean (CATTrue or CATFalse).
    *   @param bAct
    *      angular threshold activity
    *   @param iPosition 
    *      Position 
    *   @see CATBoolean
    */
    virtual HRESULT GetAngularThresholdActivity(CATBoolean & bAct, const int iPosition) = 0;
    
    /**
    * Sets the angular threshold activity (whether it is taken into
    * account or not). 
    * <br>This activity is a CATBoolean (CATTrue or CATFalse).
    *   @param bAct
    *      angular threshold activity
    *   @param iPosition 
    *      Position 
    *   @see CATBoolean
    */
    virtual HRESULT SetAngularThresholdActivity(const CATBoolean bAct, const int iPosition) = 0;

	/**
    * Gets support.
    *   @param iPosition 
    *      Position 
    *   @param Support
    *    solid feature 
    */ 
	virtual HRESULT GetSupport (const int Position , CATIMmiMechanicalFeature_var & Support) = 0;

	/**
    * Sets support.
    *   @param iElem
    *    solid feature 
    *   @param iPosition 
    *      Position 
    */ 
	virtual HRESULT SetSupport(const CATIMmiMechanicalFeature_var iElem, const int iPosition) = 0;
    

};

CATDeclareHandler (CATIGSMUseExtractMulti, CATBaseUnknown);
#endif // CATIGSMUseExtractMulti_H
