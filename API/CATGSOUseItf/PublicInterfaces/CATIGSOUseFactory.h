/* -*-c++-*- */
#ifndef CATIGSOUseFactory_H
#define CATIGSOUseFactory_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
* @CAA2Level L1
* @CAA2Usage U3
*/


#include "ExportedByCATGSOUseItf.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATICkeParm.h"

//
// Enumerations 
#include "CATGSMDevelopDef.h"
#include "CATGSOJunctionDef.h"
#include "CATGSMPositionTransfoDef.h"
#include "CATGSOWrapCurveDef.h"
#include "CATGSOWrapSurfaceDef.h"
#include "CATGSMContinuityDef.h"
#include "CATGSMTransferDef.h"

class CATIMmiMechanicalFeature_var;
class CATIGSMUseDevelop_var;
class CATIGSOUseJunction_var;
class CATIGSOUseSeatDiabolo_var;
class CATIGSMUsePositionTransfo_var;
class CATIGSOUseWrapCurve_var;
class CATIGSOUseWrapSurface_var;
class CATIGSOUseBump_var;
class CATIGSOUseShapeMorphing_var;
class CATIGSMUseUnfold_var;
class CATIGSMUseTransfer_var;
class CATIGSOUseVariableOffset_var;
class CATListValCATIMmiMechanicalFeature_var;
class CATIGSMUseSurfaceSimplification_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSOUseItf IID  IID_CATIGSOUseFactory;
#else
extern "C" const IID IID_CATIGSOUseFactory;
#endif

/**
* Factory of all geometrical elements of Generative Shape Optimizer workshop.
* <b>Role</b>: Creation of all Generative Shape Optimizer feature.
* All methods described here work on CATIMmiMechanicalFeature (for geometrical elements)
* and CATICkeParm (for data such as lengths, angles, ratios...).
* <p>
* Note: If the creation fails, the methods return NULL_var.
* <p>
* This factory never agregates the created feature.
* You need to agregate your object in a GSMTool feature to see it in 3D and Graph. 
* GSMTool feature can be either HybridBody(Body), Geometrical Set (GS) or Ordered Geometrical Set (OGS). 
* <br>You can use :
* <ul> 
* <li> either the interface CATIMechanicalRootFactory to create the GSMTool and 
* the interface CATIDescendants on GSMTool to agregate the GSM feature.</li>
* <li>  or in a more straigh forward way the method InsertInProceduralView method 
* of CATIGSMUseProceduralView Interface. (recommended since V5R12) </li>
* </ul> 
* <p>
* Once aggregated the feature has to be updated. 
* <p> 
* If feature is inserted in Body or OGS, you have to call CATMmrLinearBodyServices::Insert() 
* This method checks the linearity of the Parent/Children relationship and ,if needed,
* performed re-arrangement(Replace) to makes sure that created feature depends logically of just previouly created feature 
* <p> 
* LICENCING INFORMATION    
* <br>This interface concern GSO/DL1/ABT(partly)  features creation 
* <br>Use of the creation methods requires to have granted license configuration for feature creation
* <ul> 
* <li> - Bump, Develop, WrapCurve, WrapSurface, Surface Simplification require GSO License</li>
* <li> - Unfold, Develop require DL1 License </li>
* </ul> 
* <br> if License are not granted creation fails.
* <p> 
* @see CATIGSMUseProceduralView,CATIMechanicalRootFactory,CATIGSMUseTool, CATIMmiMechanicalFeature, CATICkeParm, CATICkeParmFactory 
*/
class ExportedByCATGSOUseItf CATIGSOUseFactory : public CATBaseUnknown
{
  CATDeclareInterface;

public: 

  //==========================================================================
  // DEVELOP
  //==========================================================================
  /**
  * Creates a developed curve.
  * <br> Note: require either DL1 or GSO license.
  *   @param Mode
  *      Develop-Develop or Develop-Project
  *   @param iToDevelop
  *      iCurve to be developed.
  *   @param iSupport
  *      Revolution surface for develop.
  *   @param ibInstanciateTransfo
  *      Flag indicating whether :<br>
  *       - the user has not done anything (yet) for wire positioning :
  *       ibInstanciateTransfo = TRUE (default ivalue if not specified) <br>
  *       - the user has already instanciated a positioning transformation
  *       of his own, and then will have to use SetPositionedWire() to
  *       store it : ibInstanciateTransfo = FALSE <br>
  *   @return CATIGSMUseDevelop_var 
  *       created develop.
  * @see CATIGSMUseDevelop, CATGSMDevelopMethod
  */
  virtual CATIGSMUseDevelop_var CreateDevelop(CATGSMDevelopMethod Mode,
    const CATIMmiMechanicalFeature_var iToDevelop,
    const CATIMmiMechanicalFeature_var iSupport,
    const boolean ibInstanciateTransfo = TRUE) = 0;

  //==========================================================================
  // UNFOLD
  //==========================================================================
  /**
  * Creates a Unfold operation.
  * <br> Note: require DL1 license.
  *   @return CATIGSMUseUnfold_var 
  *       created feature.
  * @see CATIGSMUseUnfold
  */
  virtual CATIGSMUseUnfold_var CreateUnfold() = 0;

  //==========================================================================
  // WRAP CURVE
  //==========================================================================
  /**
  * Creates a wrapcurve surface deformation feature.
  * <br> Note: require GSO license.
  *   @return CATIGSOUseWrapCurve_var 
  *       created WrapCurve, @see CATIGSOUseWrapCurve
  */
  virtual CATIGSOUseWrapCurve_var CreateWrapCurve() = 0;

  /**
  * Creates a wrapcurve surface deformation feature.
  * <br> Note: require GSO license.
  * @param iReferenceCurves 
  *   The list of reference curves.
  * @param iTargetCurves
  *   The list of target curves.
  *   The first curve in oTargetCurves is the target curve of the first curve in oReferenceCurves,
  *   The second curve in oTargetCurves is the target curve of the second curve in oReferenceCurves...
  * @param iFirstCurvesCst 
  *   The constraint to first curves 
  *      @see CATGSOWrapCurveSurfaceCst
  * @param iLastCurvesCst 
  *   The constraint to last curves 
  *      @see CATGSOWrapCurveSurfaceCst
  *   @return CATIGSOUseWrapCurve_var 
  *       created WrapCurve, @see CATIGSOUseWrapCurve
  */
  virtual CATIGSOUseWrapCurve_var CreateWrapCurve(
    const CATListValCATIMmiMechanicalFeature_var & iReferenceCurves
    , const CATListValCATIMmiMechanicalFeature_var & iTargetCurves
    , const CATGSOWrapCurveSurfaceCst iFirstCurvesCst = CATGSOWrapCurveSameCurvature
    , const CATGSOWrapCurveSurfaceCst iLastCurvesCst = CATGSOWrapCurveSameCurvature
    ) = 0;




  //==========================================================================
  // BUMP
  //==========================================================================
  /**
  * Creates a new surface with a bump type deformation. 
  * <br> Note: require GSO license.
  *   @param iElemToBump
  *      Element to be modified by a bump deformation.
  *   @return CATIGSOUseBump_var 
  *       created surface
  * @see CATIGSOUseBump, CATICkeParm
  */
  virtual CATIGSOUseBump_var CreateBump(const CATIMmiMechanicalFeature_var iElemToBump 
    ) = 0;

  /**
  * Creates a new surface with a bump type deformation.
  * <br> Note: require GSO license.
  *   @param iElemToBump
  *      Element to be modified by a bump deformation.
  *   @param iLimitCurve
  *      Curve limit of the deformation area.
  *   @param iDeformationCenter
  *      Center of the bump deformation.
  *   @param iProjectionDir
  *      Projection Direction.
  *   @param iDeformationDir
  *      Direction of the bump deformation.
  *   @param iDeformationDistance
  *      Distance of the bump deformation. 
  *   @param iDeviationUser
  *      G0 deviation fixed by the user.
  *   @param iContinuity
  *      Continuity type .
  *   @return CATIGSOUseBump_var 
  *       created surface
  * @see CATIGSOUseBump, CATICkeParm
  */
  virtual CATIGSOUseBump_var CreateBump(const CATIMmiMechanicalFeature_var iElemToBump 
    ,const CATIMmiMechanicalFeature_var iLimitCurve 
    ,const CATIMmiMechanicalFeature_var iDeformationCenter 
    ,const CATIMmiMechanicalFeature_var iProjectionDir 
    ,const CATIMmiMechanicalFeature_var iDeformationDir 
    ,const CATICkeParm_var    iDeformationDistance
    ,const CATICkeParm_var    iDeviationUser=NULL_var
    ,CATGSMContinuity iContinuity=CATGSMContinuity_Curvature
    ) = 0;


  //==========================================================================
  // WRAP SURFACE
  //==========================================================================
  /**
  * Creates a wrapsurface deformation feature.
  * <br> Note: require GSO license. 
  *   @param iElemToDeform
  *      Element to be modified by a wrap surface deformation.
  *   @return CATIGSOUseWrapSurface_var 
  *       created WrapSurface, @see CATIGSOUseWrapSurface
  */

  virtual CATIGSOUseWrapSurface_var CreateWrapSurface(const CATIMmiMechanicalFeature_var iElemToDeform 
    ) = 0;

  /**
  * Creates a wrapsurface deformation feature.
  * <br> Note: require GSO license.
  *   @param iElemToDeform
  *      Element to be modified by a wrap surface deformation.
  *   @param iReferenceSurface
  *      Reference Element to define a wrap surface deformation.
  *   @param iTargetSurface
  *      Target Element to define a wrap surface deformation.
  *   @return CATIGSOUseWrapSurface_var 
  *       created WrapSurface, @see CATIGSOUseWrapSurface
  */

  virtual CATIGSOUseWrapSurface_var CreateWrapSurface(const CATIMmiMechanicalFeature_var iElemToDeform 
    ,const CATIMmiMechanicalFeature_var iReferenceSurface 
    ,const CATIMmiMechanicalFeature_var iTargetSurface 
    ) = 0;
  //==========================================================================
  // TRANSFER
  //==========================================================================
  /**
  * Creates a Transfered result.
  * <br> Note: require either DL1 or GSO license.
  *   @param ihSpecObject
  *      Element to be transfered.
  *   @param iType
  *      Type of transfer
  *   @return CATIGSMUseTransfer_var
  *       created feature, @see CATIGSMUseTransfer
  */
  virtual CATIGSMUseTransfer_var CreateTransfer(const CATIMmiMechanicalFeature_var& ihSpecObject, const CATGSMTypeOfTransfer iType) = 0;

  //==========================================================================
  // Surface Simplification
  //==========================================================================
  /**
  * Creates a Surface Simplification feature.
  * <br> Note: requires license containing Generative Shape Morphing application.
  *   @return CATIGSMUseSurfaceSimplification_var 
  *       the Surface Simplification feature.
  * @see CATIGSMUseSurfaceSimplification 
  */
  virtual CATIGSMUseSurfaceSimplification_var CreateSurfaceSimplification() = 0;
};
CATDeclareHandler (CATIGSOUseFactory, CATBaseUnknown);
#endif // CATIGSOUseFactory_H


