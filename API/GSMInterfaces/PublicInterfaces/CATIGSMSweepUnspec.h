/* -*-c++-*-    */
#ifndef CATIGSMSweepUnspec_H
#define CATIGSMSweepUnspec_H

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

//=============================================================================
//
// Class CATIGSMSweepUnspec:
//
//=============================================================================

#include "CATICkeParm.h"
#include "CATGitInterfacesExportedBy.h"
#include "CATGSMPositionTransfoDef.h"
#include "CATGSMBasicLawDef.h"
#include "CATGSMSweepDef.h"
#include "CATGSMContextDef.h"
#include "CATGSMCanonicalDetectionDef.h"

class CATISpecObject_var;
class CATIGSMDirection_var;
class CATICkeLaw_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID IID_CATIGSMSweepUnspec;
#else
extern "C" const IID IID_CATIGSMSweepUnspec;
#endif
/**
  * Interface to explicit profile sweep feature.
  * <b>Role</b>: Allows you to access data of swept surface feature created with an explicit profile.
  * In the following, 'initial plane' stands for the initial profile mean plane,
  * and 'target plane' stands for the first sweep plane.
  * <p>  LICENSING INFORMATION: Creation of volume result requires GSO License
  * <br> if GSO License is not granted , settting of Volume context has not effect 
  * <br> 
  * @see CATGSMPositionMode, CATGSMAxisInversionMode
  * @see CATIGSMPositionTransfo
  * @see CATIGSMFactory#CreateExplicitSweep
  */
class ExportedByCATGitInterfaces CATIGSMSweepUnspec : public CATBaseUnknown
{

 CATDeclareInterface;

 public:

   /**
    * Gets first guide curve.
    *   @param oElem
    *      First guide curve feature.
    */
 virtual HRESULT GetGuide(CATISpecObject_var & oElem) = 0;
   /**
    * Sets first guide curve.
    *   @param iElem
    *      First guide curve feature.
    */
 virtual HRESULT SetGuide(const CATISpecObject_var iElem) = 0;
   /**
    * Gets a guide curve given its index.
    *   @param oElem
    *      Guide curve feature.
    *   @param iI
    *      Guide curve index : 1 or 2
    */
 virtual HRESULT GetGuide(CATISpecObject_var & oElem, const int iI) = 0;
   /**
    * Sets a guide curve given its index.
    *   @param iElem
    *      Guide curve feature.
    *   @param iI
    *      Guide curve index : 1 or 2
    */
 virtual HRESULT SetGuide(const CATISpecObject_var iElem, const int iI) = 0;
   /**
    * Gets the number of guide curves.
    *   @param oI
    *      Number of guide curves
    */
 virtual HRESULT GetNbGuide(int & oI) = 0;
   /**
    * Removes all guide curves.
    */
 virtual HRESULT DelGuide() = 0;

   /**
    * Gets the original profile.
    *   @param oElem
    *      Original profile feature
    */
 virtual HRESULT GetProfile(CATISpecObject_var & oElem) = 0;
   /**
    * Sets the original profile.
    *   @param iElem
    *      Original profile feature
    */
 virtual HRESULT SetProfile(const CATISpecObject_var iElem) = 0;

   /**
     *  Uses Sketch Axis As Default.
     * <br> 
     *  In case of a sketch profile, specify if the 2D sketch axis must be
     *  used as default planar profile axis (for positioning purpose) or not.
     *   @param iBoolean
     *      TRUE if the 2D sketch axis must be used, FALSE if not.
     */
 virtual HRESULT UseSketchAxisAsDefault(const CATBoolean iBoolean = TRUE) = 0;
   /**
     * Queries status wherere Sketch axis used as default or not.
     * <br> 
     *  In case of a sketch profile, specify if the 2D sketch axis must be
     *  used as default planar profile axis (for positioning purpose) or not.
     *   @param oBoolean
     *      TRUE if the 2D sketch axis must be used, FALSE if not.
     */
 virtual HRESULT IsSketchAxisUsedAsDefault(CATBoolean & oBoolean) = 0;

   /**
    * Gets the positioning transformation.
    * <br> This method allows to get the user positioned profile.
    * <br> The result of this feature is the profile positioned in the first sweep plane.
    *   @param oElem
    *      Positioning transformation feature (or positioned profile)
    *  <br> Note: in case of positionning, 
    * The returned objet answer to CATIGSMPositionTransfo interface object.   
    * @see CATIGSMPositionTransfo 
    */
 virtual HRESULT GetPositionedProfile(CATISpecObject_var & oElem) = 0;
   /**
    * Sets the positioning transformation.
    *   @param iElem
    *      Positioning transformation feature
    */
 virtual HRESULT SetPositionedProfile(CATISpecObject_var & iElem) = 0;

   /**
    * Gets the positioning mode.
    *   @param Elem
    *      CATGSMPositionMode_ExplicitSweep if a positioning operation is operated,
    *      CATGSMPositionMode_NoneOrPositioned if not
    *   @see CATGSMPositionMode
    */
 virtual HRESULT GetPosMode(enum CATGSMPositionMode & Elem) = 0;
   /**
    * Sets the positioning mode.
    *   @param Elem
    *      CATGSMPositionMode_ExplicitSweep if a positioning operation is operated,
    *      CATGSMPositionMode_NoneOrPositioned if not
    *   @see CATGSMPositionMode
    */
 virtual HRESULT SetPosMode(const enum CATGSMPositionMode Elem) = 0;


   /**
    * Gets the fitting points : located in the profile plane, these points are used
	* for two-guide swept surfaces to determine guide intersection locations.
    *   @param oElem1
    *      Fitting point associated to the first guide
    *   @param oElem2
    *      Fitting point associated to the second guide
   */
 virtual HRESULT GetFittingPoints(CATISpecObject_var & oElem1, CATISpecObject_var & oElem2) = 0;

   /**
    * Sets the fitting points.
    *<br> Does not work with NULL_var values,  Use RemoveFittingPoints() method instead.
    *   @param iElem1
    *      Fitting point associated to the first guide (must not be equal to NULL_var)
    *   @param iElem2
    *      Fitting point associated to the second guide (can be equal to NULL_var)
    */
 virtual HRESULT SetFittingPoints(const CATISpecObject_var iElem1, const CATISpecObject_var iElem2) = 0;

   /**
    * Removes the fitting points.
    */
 virtual HRESULT RemoveFittingPoints() = 0;

   /**
    * Gets the spine.
    *   @param oElem
    *      Spine feature
    */
 virtual HRESULT GetSpine(CATISpecObject_var & oElem) = 0;

   /**
    * Sets the spine.
    *   @param iElem
    *      Spine feature
    */
 virtual HRESULT SetSpine(const CATISpecObject_var iElem) = 0;

   /**
    * Gets the elements relimiting the spine (or the default spine).
    *   @param oElem1
    *      First relimiting feature (plane or point)
    *   @param boInv1
    *      Split direction for the first relimitation<br>
    *      FALSE means that the beginning of the spine (considering its orientation) is removed, TRUE means that the end of the spine is removed
    *   @param oElem2
    *      Second relimiting feature (plane or point)
    *   @param boInv2
    *      Split direction for the second relimitation
    */
 virtual HRESULT GetLongitudinalRelimiters(CATISpecObject_var & oElem1, CATBoolean & boInv1, CATISpecObject_var & oElem2, CATBoolean & boInv2) = 0;
   /**
    * Sets the elements relimiting the spine (or the default spine).
    *   @param iElem1
    *      First relimiting feature (plane or point)
    *   @param biInv1
    *      Split direction for the first relimitation<br>
    *      FALSE means that the beginning of the spine (considering its orientation) is removed, TRUE means that the end of the spine is removed
    *   @param iElem2
    *      Second relimiting feature (plane or point)
    *   @param biInv2
    *      Split direction for the second relimitation
    */
 virtual HRESULT SetLongitudinalRelimiters(const CATISpecObject_var & iElem1, const CATBoolean biInv1, const CATISpecObject_var & iElem2, const CATBoolean biInv2) = 0;


   /**
    * Gets the reference surface.
    *   @param oElem
    *      Reference surface feature
    */
 virtual HRESULT GetReference(CATISpecObject_var & oElem) = 0;
   /**
    * Sets the reference surface.
    *   @param iElem
    *      Reference surface feature
    */
 virtual HRESULT SetReference(const CATISpecObject_var iElem) = 0;

   /**
    * Gets the first reference surface angle.
    *   @param oElem
    *      Angle value 
    */
 virtual HRESULT GetAngle(double & oElem, const int iI=1) = 0;
   /**
    * Gets the first reference surface angle.
    *   @param oElem
    *      Angle literal feature 
    *   @see CATICkeParm
    */
 virtual HRESULT GetAngle(CATICkeParm_var & oElem, const int iI=1) = 0;
   /**
    * Sets the first reference surface angle.
    *   @param iElem
    *      Angle value 
    */
 virtual HRESULT SetAngle(const double iElem, const int iI=1) = 0;
   /**
    * Sets the first reference surface angle.
    *   @param iElem
    *      Angle literal feature 
    *   @see CATICkeParm     
    */
 virtual HRESULT SetAngle(const CATICkeParm_var iElem, const int iI=1) = 0;
   /**
    * Gets the number of reference surface angle (0 or 1).
    *   @param oI
    *      Number of reference surface angle
    */
 virtual HRESULT GetNbAngle(int & oI) = 0;
   /**
    * Removes reference surface angle.
    */
 virtual HRESULT DelAngle() = 0;
   /**
    * Gets angular law feature.
    *   @param Elem
    *      Angular law feature
    *   @see CATICkeParm
    */
 virtual HRESULT GetAngularLaw(CATICkeLaw_var & Elem) = 0;
   /**
    * Sets angular law feature.
    *   @param Elem
    *      Angular law feature
    *   @see CATICkeParm
    */
 virtual HRESULT SetAngularLaw(const CATICkeLaw_var & Elem) = 0;
   /**
    * Gets the type of angular law used for reference angle.
    *   @param eType
    *      Angular law type: <BR>
    *       - CATGSMBasicLawType_Constant for constant law (first angle
    *         value taken), <BR>
    *       - CATGSMBasicLawType_Linear for linear law from first angle to
    *         second angle values, <BR>
    *       - CATGSMBasicLawType_SType for S type law from first angle to
    *         second angle values, <BR>
    *       - CATGSMBasicLawType_Advanced for a law specified by a law
    *         feature.
    *   @see CATGSMBasicLawType
    */
 virtual HRESULT GetAngularLawType(enum CATGSMBasicLawType & eType) = 0;
   /**
    * Sets the type of angular law used for reference angle.
    *   @param eType
    *      Angular law type: <BR>
    *       - CATGSMBasicLawType_None or CATGSMBasicLawType_Constant for
    *         constant law (first angle value taken), <BR>
    *       - CATGSMBasicLawType_Linear for linear law from first angle to
    *         second angle values, <BR>
    *       - CATGSMBasicLawType_SType for S type law from first angle to
    *         second angle values, <BR>
    *       - CATGSMBasicLawType_Advanced for a law specified by a law
    *         feature.
    *   @see CATGSMBasicLawType
    */
 virtual HRESULT SetAngularLawType(const enum CATGSMBasicLawType eType) = 0;
   /**
    * Gets information whether reference angle law has to be inverted or not.
    *   @param oInversion
    *      TRUE or FALSE (FALSE if not specified).
    *   @see CATGSMBasicLawType
    */
 virtual HRESULT GetAngularLawInversion(CATBoolean & oInversion) = 0;
   /**
    * Sets information whether reference angle law has to be inverted or not.
    *   @param iInversion
    *      TRUE or FALSE.
    *   @see CATGSMBasicLawType
    */
 virtual HRESULT SetAngularLawInversion(const CATBoolean iInversion) = 0;

   /**
    * Gets the numerical positioning parameters corresponding to coordinates.
    * of the new axes systems origins.
    *   @param oElem
    *      Numerical parameter (literal feature)
    *   @param iI
    *      Index of the parameter : <BR>
    *       - 1 and 2 for origin coordinates in the initial plane, <BR>
    *       - 3 and 4 for origin coordinates in the target plane.
    *   @see CATICkeParm
    */
 virtual HRESULT GetPosCoord(CATICkeParm_var & oElem, const int iI) = 0;
   /**
    * Sets the numerical positioning parameters corresponding to coordinates.
    * of the new axes systems origins.
    *   @param iElem
    *      Numerical parameter (literal feature)
    *   @param iI
    *      Index of the parameter : <BR>
    *       - 1 and 2 for origin coordinates in the initial plane, <BR>
    *       - 3 and 4 for origin coordinates in the target plane.
    *   @see CATICkeParm
    */
 virtual HRESULT SetPosCoord(const CATICkeParm_var iElem, const int iI) = 0;
   /**
    * Sets the numerical positioning parameters corresponding to coordinates.
    * of the new axes systems origins.
    *   @param iElem
    *      Numerical value
    *   @param iI
    *      Index of the parameter : <BR>
    *       - 1 and 2 for origin coordinates in the initial plane, <BR>
    *       - 3 and 4 for origin coordinates in the target plane.
    */
 virtual HRESULT SetPosCoord(const double iElem, const int iI) = 0;
   /**
    * Gets the number of numerical positioning parameters corresponding to
    * coordinates of the new axes systems origins.
    *   @param oI
    *      Number of parameters
    */
 virtual HRESULT GetNbPosCoord(int & oI) = 0;

 /**
    * Gets the numerical positioning parameters corresponding to angles
    * from the default positions of the X axes.
    *   @param oElem
    *      Numerical parameter (literal feature)
    *   @param iI
    *      Index of the parameter : <BR>
    *       - 1 for direction angle in the initial plane, <BR>
    *       - 2 for direction angle in the target plane.
    *   @see CATICkeParm 
    */
 virtual HRESULT GetPosAngle(CATICkeParm_var & oElem, const int iI) = 0;
   /**
    * Sets the numerical positioning parameters corresponding to angles
    * from the default positions of the X axes.
    *   @param iElem
    *      Numerical parameter (literal feature)
    *   @param iI
    *      Index of the parameter : <BR>
    *       - 1 for direction angle in the initial plane, <BR>
    *       - 2 for direction angle in the target plane.
    *   @see CATICkeParm 
    */
 virtual HRESULT SetPosAngle(const CATICkeParm_var iElem, const int iI) = 0;
   /**
    * Sets the numerical positioning parameters corresponding to angles
    * from the default positions of the X axes.
    *   @param iElem
    *      Numerical value
    *   @param iI
    *      Index of the parameter : <BR>
    *       - 1 for direction angle in the initial plane, <BR>
    *       - 2 for direction angle in the target plane.
    */
 virtual HRESULT SetPosAngle(const double iElem, const int iI) = 0;
   /**
    * Gets the number of numerical positioning parameters corresponding to
    * angles from the default positions of the X axes.
    *   @param oI
    *      Number of parameters
    */
 virtual HRESULT GetNbPosAngle(int & oI) = 0;

   /**
    * Gets the positioning parameters : axes inversion from previous definition
    * for each transformation plane (initial and target).
    *   @param oI
    *      State of axes : <BR>
    *       - CATGSMAxisInversionMode_None : no axis inverted <BR>
    *       - CATGSMAxisInversionMode_X : only X axis inverted <BR>
    *       - CATGSMAxisInversionMode_Y : only Y axis inverted <BR>
    *       - CATGSMAxisInversionMode_Both : both axes inverted
    *   @param iIdx
    *      Plane index : 1 for initial one, 2 for target one
    *   @see CATGSMAxisInversionMode 
    */
 virtual HRESULT GetPosSwapAxes(enum CATGSMAxisInversionMode & oI, const int iIdx) = 0;
   /**
    * Gets the positioning parameter : initial plane axes inversion from
    * previous definition.
    *   @param oI
    *      State of axes
    *    @see CATGSMAxisInversionMode 
    */
 virtual HRESULT GetPosSwapAxes(enum CATGSMAxisInversionMode & oI) = 0;
   /**
    * Modify the positioning parameters : axes inversion from previous definition
    *  for each transformation plane (initial and target).
    *   @param iI
    *      State of axes : <BR>
    *       - CATGSMAxisInversionMode_None : no axis inverted <BR>
    *       - CATGSMAxisInversionMode_X : only X axis inverted <BR>
    *       - CATGSMAxisInversionMode_Y : only Y axis inverted <BR>
    *       - CATGSMAxisInversionMode_Both : both axes inverted
    *   @param iIdx
    *      Plane index : 1 for initial one, 2 for target one
    *   @see CATGSMAxisInversionMode 
    */
 virtual HRESULT SetPosSwapAxes(const enum CATGSMAxisInversionMode iI, const int iIdx) = 0;
 
  /**
    * Sets the positioning parameter : initial plane axes inversion from
    * previous definition.
    *   @param iII
    *      State of axes
    *   @see CATGSMAxisInversionMode
    */
 virtual HRESULT SetPosSwapAxes(const enum CATGSMAxisInversionMode iII) = 0;

   /**
    * Gets the points designated as the origins of the initial and target
    * transformation planes.
    *   @param oElem
    *      Point feature
    *   @param iI
    *      Plane index : 1 for initial one, 2 for target one
    */
 virtual HRESULT GetPosPoint(CATISpecObject_var & oElem, const int iI) = 0;
   /**
    * Gets the point designated as the origin of the initial plane.
    *   @param oElem
    *      Point feature
    */
 virtual HRESULT GetPosPoint(CATISpecObject_var & oElem) = 0;
   /**
    * Sets the points designated as the origins of the initial and target
    * transformation planes.
    *   @param iElem
    *      Point feature
    *   @param iI
    *      Plane index : 1 for initial one, 2 for target one
    */
 virtual HRESULT SetPosPoint(const CATISpecObject_var iElem, const int iI) = 0;
   /**
    * Sets the point designated as the origin of the initial plane.
    *   @param iElem
    *      Point feature
    */
 virtual HRESULT SetPosPoint(const CATISpecObject_var iElem) = 0;

   /**
    * Gets the positioning directions : initial or target plane X-axis direction.
    *   @param oElem
    *      Direction feature
    *   @param iI
    *      Plane index : 1 for initial one, 2 for target one
    *   @see CATIGSMDirection
    */
 virtual HRESULT GetPosDirection(CATIGSMDirection_var & oElem, const int iI) = 0;
   /**
    * Gets the positioning direction : initial plane X-axis direction.
    *   @param oElem
    *      Direction feature
    *   @see CATIGSMDirection
    */
 virtual HRESULT GetPosDirection(CATIGSMDirection_var & oElem) = 0;
   /**
    * Sets the positioning directions : initial or target plane X-axis direction.
    *   @param iElem
    *      Direction feature
    *   @param iI
    *      Plane index : 1 for initial one, 2 for target one
    *   @see CATIGSMDirection
    */
 virtual HRESULT SetPosDirection(const CATIGSMDirection_var iElem, const int iI) = 0;
   /**
    * Sets the positioning direction : initial plane X-axis direction.
    *   @param iElem
    *      Direction feature
    *   @see CATIGSMDirection
    */
 virtual HRESULT SetPosDirection(const CATIGSMDirection_var iElem) = 0;


  /**
   * Gets the computation mode of the X axis (or direction) of the initial axis system
   * (on the profile). Default value (if not specified by SetProfileXAxisComputationMode)
   * is CATGSMPositionDirCompMode_None if GetPosDirection(OutputDirection) gives a NULL_var
   * OutputDirection, and CATGSMPositionDirCompMode_User if OutputDirection is different
   * from NULL_var.
   *   @param oDirCompMode
   *      Mode : <BR>
   *      - CATGSMPositionDirCompMode_None: no X axis specified <BR>
   *      - CATGSMPositionDirCompMode_Tangent: the X axis is implicitly the tangent
   *         of the profile at the origin (the origin then HAS to be on the profile) <BR>
   *      - CATGSMPositionDirCompMode_User: the X axis is specified by a direction via
   *         SetPosDirection(UserInputDirection, 1)
   *   @see CATIGSMPositionTransfo
   */
   virtual HRESULT GetProfileXAxisComputationMode(enum CATGSMPositionDirCompMode & oDirCompMode) = 0;
  /**
   * Sets the computation mode of the X axis (or direction) of the initial axis system.
   * If CATGSMPositionDirCompMode_None or CATGSMPositionDirCompMode_Tangent is specified,
   * a SetPosDirection(NULL_var, 1) is performed.
   * Specifying CATGSMPositionDirCompMode_User is useless: if a direction has previously
   * been specified, the mode has already been set.
   *   @param iDirCompMode
   *      Mode
   * @see CATIGSMPositionTransfo
   */
   virtual HRESULT SetProfileXAxisComputationMode(const enum CATGSMPositionDirCompMode iDirCompMode) = 0;


   /**
    * Gets information whether sweeping operation is smoothed or not.
    *   @param oSmooth
    *      TRUE or FALSE (FALSE if not specified).
    */
 virtual HRESULT GetSmoothActivity(CATBoolean & oSmooth) = 0;
   /**
    * Sets information whether sweeping operation is smoothed or not.
    *   @param iSmooth
    *      TRUE or FALSE.
    */
 virtual HRESULT SetSmoothActivity(const CATBoolean iSmooth) = 0;

   /**
    * Gets angular threshold under which discontinuities (moving frame,
	 * tangency net on reference surface) will be smoothed when sweeping.
    *   @param oElem
    *      Numerical value.
    */
 virtual HRESULT GetSmoothAngleThreshold(double & oElem) = 0;
   /**
    * Gets angular threshold under which discontinuities (moving frame,
	 * tangency net on reference surface) will be smoothed when sweeping.
    *   @param oElem
    *      Angular literal feature.
    */
 virtual HRESULT GetSmoothAngleThreshold(CATICkeParm_var & oElem) = 0;
   /**
    * Sets angular threshold under which discontinuities (moving frame,
	 * tangency net on reference surface) will be smoothed when sweeping.
    *   @param iElem
    *      Numerical value.
    */
 virtual HRESULT SetSmoothAngleThreshold(const double iElem) = 0;
   /**
    * Sets angular threshold under which discontinuities (moving frame,
    * tangency net on reference surface) will be smoothed when sweeping.
    *   @param iElem
    *      Angular literal feature.
    */
 virtual HRESULT SetSmoothAngleThreshold(const CATICkeParm_var & iElem) = 0;


   /**
    * Gets information whether a deviation from guide curves is allowed or not
    * during sweeping operation in order to smooth it.
    *   @param oSmooth
    *      TRUE or FALSE (FALSE if not specified).
    */
 virtual HRESULT GetGuideDeviationActivity(CATBoolean & oActi) = 0;
   /**
    * Sets information whether a deviation from guide curves is allowed or not
    * during sweeping operation in order to smooth it.
    *   @param iSmooth
    *      TRUE or FALSE.
    */
 virtual HRESULT SetGuideDeviationActivity(const CATBoolean iActi) = 0;

   /**
    * Gets deviation value (length) from guide curves allowed during sweeping
    * operation in order to smooth it.
    *   @param oElem
    *      Numerical value.
    */
 virtual HRESULT GetGuideDeviation(double & oElem) = 0;
   /**
    * Gets deviation value (length) from guide curves allowed during sweeping
    * operation in order to smooth it.
    *   @param oElem
    *      Length literal feature.
    */
 virtual HRESULT GetGuideDeviation(CATICkeParm_var & oElem) = 0;
   /**
    * Sets deviation value (length) from guide curves allowed during sweeping
    * operation in order to smooth it.
    *   @param iElem
    *      Numerical value.
    */
 virtual HRESULT SetGuideDeviation(const double iElem) = 0;
   /**
    * Sets deviation value (length) from guide curves allowed during sweeping
    * operation in order to smooth it.
    *   @param iElem
    *      Length literal feature.
    */
 virtual HRESULT SetGuideDeviation(const CATICkeParm_var & iElem) = 0;


   /**
    * Gets explicit sweep case number (also called mode). 
    * Possible cases are: <BR>
    *  - CATGSMExplicitSweep_None: no information on feature and no guide curve (treated as
    *    reference surface case or two-guide-curve case depending on the number of guide curves) <BR>
    *  - CATGSMExplicitSweep_ReferenceSurface: optional reference surface case, or no
    *    information on feature (old feature with no mode) but only one guide curve present<BR>
    *  - CATGSMExplicitSweep_TwoGuideCurves: two-guide-curve case, or no
    *    information on feature (old feature with no mode) but two guide curves present<BR>
    *  - CATGSMExplicitSweep_PullingDirection: pulling direction case
    *   @param oElem
    *      Case number
    *   @see CATGSMExplicitSweepCase
    */
 virtual HRESULT GetMode(enum CATGSMExplicitSweepCase & oElem) = 0;
   /**
    * Sets explicit sweep case number.
    *   @param iElem
    *      Case number
    *   @see CATGSMExplicitSweepCase
    */
 virtual HRESULT SetMode(const enum CATGSMExplicitSweepCase iElem) = 0;


   /**
    * Gets the pulling direction. This input replaces the reference surface;
    * indeed, if the direction is specified, the plane normal to this direction
    * is taken as reference surface.
    *   @param oDir
    *      Pulling direction feature
    * @see CATIGSMDirection 
    */
 virtual HRESULT GetPullingDirection(CATIGSMDirection_var & oDir) = 0;
   /**
    * Sets the pulling direction. This input replaces the reference surface;
    * indeed, if the direction is specified, the plane normal to this direction
    * is taken as reference surface.
    *   @param iDir
    *      Pulling direction feature
    * @see CATIGSMDirection 
    */
 virtual HRESULT SetPullingDirection(const CATIGSMDirection_var & iDir) = 0;

   /**
    * Allows to know if the guide curve is projected onto the reference plane
    * and used as spine, in pulling direction case only.
    *   @param obProj
    *      TRUE is projection is required, FALSE if not
    */
 virtual HRESULT IsGuideProjected(CATBoolean & obProj) = 0;
   /**
    * Sets the projection of the guide curve onto the reference plane in order
    * to use it as spine, in pulling direction case only.
    * Sets the spine to NULL_var if TRUE.
    *   @param ibProj
    *      TRUE is projection is required, FALSE if not
    */
 virtual HRESULT SetGuideProjection(const CATBoolean ibProj) = 0;

 /**
    * Gets the context of the Sweep.
    *   @param oContextType
    *      CATGSMSurfaceCtxt if the result is surface, CATGSMVolumeCtxt if it is volume
    *   @see CATGSMFeatureContextType
    */
 virtual    HRESULT GetContext(CATGSMFeatureContextType & oContext)=0; 

/**
    * Sets the context of the Sweep.
    *   @param iContextType
    *      CATGSMSurfaceCtxt to generate a surface, CATGSMVolumeCtxt (requires GSO License) to generate a volume
    *   @see CATGSMFeatureContextType
    */
 virtual    HRESULT SetContext(const CATGSMFeatureContextType iContext)=0;

   /**
    * Remove the second fitting point.
    */
 virtual HRESULT RemoveSecondFittingPoint() = 0;

   /**
    * Gets the current solution number of the four possible solutions.
    *   @param oSolNo is the solution number.
    */
 virtual    HRESULT GetSolutionNo(int & oSolNo)=0; 
 
   /**
    * Sets the current solution number of the four possible solutions.
    *   @param iSolNo is the solution number.
    */
 virtual    HRESULT SetSolutionNo(int iSolNo)=0;

  /**
  * Sets information about detection of canonical surfaces of the output surface.
  *   @param iDetection
  *     If canonical surfaces are detected or not.
  *     Possible values are CATGSMNoDetection and CATGSMCanonicalDetection.
  * @see CATGSMCanonicalSurfaceDetection
  */
  virtual    HRESULT SetCanonicalDetectionMode(CATGSMCanonicalSurfaceDetection iDetection = CATGSMNoDetection) = 0;

  /**
  * Gets information about detection of canonical surfaces of the output surface.
  *   @param oDetection
  *     If canonical surfaces are detected not.
  *     Possible values are CATGSMNoDetection and CATGSMCanonicalDetection.
  * @see CATGSMCanonicalSurfaceDetection
  */
  virtual    HRESULT GetCanonicalDetectionMode(CATGSMCanonicalSurfaceDetection & oDetection) = 0;


};
CATDeclareHandler (CATIGSMSweepUnspec, CATBaseUnknown);
#endif // CATIGSMSweepUnspec_H
