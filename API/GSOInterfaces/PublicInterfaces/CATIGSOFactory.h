/* -*-c++-*- */
#ifndef CATIGSOFactory_H
#define CATIGSOFactory_H
 
// COPYRIGHT DASSAULT SYSTEMES 2001

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */


#include "ExportedByCATGotInterfaces.h"
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

class CATISpecObject_var;
class CATIGSMDevelop_var;
class CATIGSOJunction_var;
class CATIGSOSeatDiabolo_var;
class CATIGSMPositionTransfo_var;
class CATIGSOWrapCurve_var;
class CATIGSOWrapSurface_var;
class CATIGSOBump_var;
class CATIGSOShapeMorphing_var;
class CATIGSMUnfold_var;
class CATIGSMTransfer_var;
class CATIGSOVariableOffset_var;
class CATListValCATISpecObject_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGotInterfaces IID  IID_CATIGSOFactory;
#else
extern "C" const IID IID_CATIGSOFactory;
#endif

/**
 * Factory of all geometrical elements of Generative Shape Optimizer workshop.
 * <b>Role</b>: Creation of all Generative Shape Optimizer feature.
 * All methods described here work on CATISpecObject (for geometrical elements)
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
 * of CATIGSMProceduralView Interface. (recommended since V5R12) </li>
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
 * <li> - Bump, Develop,WrapCurve,WrapSurface require GSO License</li>
 * <li> - Unfold, Develop require DL1 License </li>
 * </ul> 
 * <br> if License are not granted creation fails.
 * <p> 
 * @see CATIGSMProceduralView,CATIMechanicalRootFactory,CATIGSMTool, CATISpecObject, CATICkeParm, CATICkeParmFactory 
 */
class ExportedByCATGotInterfaces CATIGSOFactory : public CATBaseUnknown
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
    *   @return CATIGSMDevelop_var 
    *       created develop.
    * @see CATIGSMDevelop, CATGSMDevelopMethod
    */
   virtual CATIGSMDevelop_var CreateDevelop(CATGSMDevelopMethod Mode,
                                            const CATISpecObject_var iToDevelop,
                                            const CATISpecObject_var iSupport,
                                            const boolean ibInstanciateTransfo = TRUE) = 0;

   //==========================================================================
   // UNFOLD
   //==========================================================================
   /**
    * Creates a Unfold operation.
    * <br> Note: require DL1 license.
    *   @return CATIGSMUnfold_var 
    *       created feature.
    * @see CATIGSMUnfold
    */
   virtual CATIGSMUnfold_var CreateUnfold() = 0;

   //==========================================================================
   // WRAP CURVE
   //==========================================================================
   /**
    * Creates a wrapcurve surface deformation feature.
    * <br> Note: require GSO license.
    *   @return CATIGSOWrapCurve_var 
    *       created WrapCurve, @see CATIGSOWrapCurve
    */
   virtual CATIGSOWrapCurve_var CreateWrapCurve() = 0;
   
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
    *   @return CATIGSOWrapCurve_var 
    *       created WrapCurve, @see CATIGSOWrapCurve
    */
   virtual CATIGSOWrapCurve_var CreateWrapCurve(
      const CATListValCATISpecObject_var & iReferenceCurves
      , const CATListValCATISpecObject_var & iTargetCurves
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
    *   @return CATIGSOBump_var 
    *       created surface
    * @see CATIGSOBump, CATICkeParm
    */
   virtual CATIGSOBump_var CreateBump(const CATISpecObject_var iElemToBump 
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
    *   @return CATIGSOBump_var 
    *       created surface
    * @see CATIGSOBump, CATICkeParm
    */
   virtual CATIGSOBump_var CreateBump(const CATISpecObject_var iElemToBump 
                                     ,const CATISpecObject_var iLimitCurve 
                                     ,const CATISpecObject_var iDeformationCenter 
                                     ,const CATISpecObject_var iProjectionDir 
                                     ,const CATISpecObject_var iDeformationDir 
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
    *   @return CATIGSOWrapSurface_var 
    *       created WrapSurface, @see CATIGSOWrapSurface
    */
 
   virtual CATIGSOWrapSurface_var CreateWrapSurface(const CATISpecObject_var iElemToDeform 
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
    *   @return CATIGSOWrapSurface_var 
    *       created WrapSurface, @see CATIGSOWrapSurface
    */
 
   virtual CATIGSOWrapSurface_var CreateWrapSurface(const CATISpecObject_var iElemToDeform 
                                     ,const CATISpecObject_var iReferenceSurface 
                                     ,const CATISpecObject_var iTargetSurface 
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
    *   @return CATIGSMTransfer_var
    *       created feature, @see CATIGSMTransfer
    */
   virtual CATIGSMTransfer_var CreateTransfer(const CATISpecObject_var& ihSpecObject, const CATGSMTypeOfTransfer iType) = 0;
};
CATDeclareHandler (CATIGSOFactory, CATBaseUnknown);
#endif // CATIGSOFactory_H


