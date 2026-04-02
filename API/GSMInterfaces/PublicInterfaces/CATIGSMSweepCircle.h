/* -*-c++-*-    */
#ifndef CATIGSMSweepCircle_H
#define CATIGSMSweepCircle_H


// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATGitInterfacesExportedBy.h"
#include "CATBaseUnknown.h"

#include "CATBooleanDef.h"
#include "CATGSMSweepDef.h"
#include "CATGSMBasicLawDef.h"
#include "CATGSMContextDef.h"
#include "CATGSMCanonicalDetectionDef.h"

class CATICkeParm_var;
class CATISpecObject_var;
class CATICkeLaw_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID IID_CATIGSMSweepCircle;
#else
extern "C" const IID IID_CATIGSMSweepCircle;
#endif

/**
* Interface to circular sweep feature.
* <b>Role</b>: Allows you to access data of the circular sweep.
* <p>  LICENSING INFORMATION: Creation of volume result requires GSO License
* <br> if GSO License is not granted , settting of Volume context has not effect 
* <br> 
* @see CATIGSMFactory#CreateCircularSweep
*/

class ExportedByCATGitInterfaces CATIGSMSweepCircle : public CATBaseUnknown
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
  * Gets circular sweep case number (also called mode).
  * Possible cases are : <BR>
  *  - CATGSMCircularSweep_None : unidentified mode <BR>
  *  - CATGSMCircularSweep_ThreeGuides : three guide curves <BR>
  *  - CATGSMCircularSweep_TwoGuidesAndRadius : two guide curves and a radius <BR>
  *  - CATGSMCircularSweep_CenterAndAngleCurve : a center curve, a reference
  *     angle curve and two angle values <BR>
  *  - CATGSMCircularSweep_CenterAndRadius : a center curve and a radius <BR>
  *  - CATGSMCircularSweep_TwoGuidesAndTangency : two guide curves with a tangency
  *     condition on the second one (with reference surface) <BR>
  *  - CATGSMCircularSweep_GuideAndTangencyAndRadius : one guide curve, one tangency surface and a radius.
  *  - CATGSMCircularSweep_LimitCurveAndTangencyAndRadius : One tangency surface, one limit curve lying on the tangency surface and a radius
  *   @param oElem
  *      Case number
  *   @see CATGSMCircularSweepCase
  */
  virtual HRESULT GetMode(enum CATGSMCircularSweepCase & oElem) = 0;
  /**
  * Sets circular sweep case number.
  *   @param iElem
  *      Case number
  *   @see CATGSMCircularSweepCase
  */
  virtual HRESULT SetMode(const enum CATGSMCircularSweepCase iElem) = 0;

  /**
  * Gets a choice number, which corresponds to each solution of a given
  * circular sweep case. <BR>
  * Example : a circular sweep with two guide curves and a radius leads
  * to four possible solutions.
  *   @param oElem
  *      Choice number
  */
  virtual HRESULT GetChoiceNo(int & oElem) = 0;
  /**
  * Sets a choice number, given a circular sweep case.
  *   @param iElem
  *      Choice number
  */
  virtual HRESULT SetChoiceNo(const int iElem) = 0;

  /**
  *Gets a sequence which identifies a solution amongst all possibilities
  * of a circular profile sweep tangent to a surface
  * (case CATGSMCircularSweep_GuideAndTangencyAndRadius).
  *   @param oNo
  *      Given the orientations, solution number in a distance ordered list.
  *   @param oShellOri
  *      This orientation allows to compute just the results that are tangent
  *      to a specific side of the shell. It can take 3 values: <BR>
  *      * +1 : the result is on the normal side of the shell, <BR>
  *      * -1 : the result is on the side of the shell opposite to the normal, <BR>
  *      * 0  : no orientation is specified. <BR>
  *   @param oGuideOri
  *      This orientation allows to compute just the results that are on the
  *      "left" or the "right" side of the shell, when looking in
  *      the guide direction. It can take 3 values: <BR>
  *      * +1 : the result is on the "left" side, <BR>
  *      * -1 : the result is on the "right" side, <BR>
  *      * 0  : no orientation is specified. <BR>
  */
  virtual HRESULT GetTangencyChoiceNo(int & oNo, int & oShellOri, int & oGuideOri) = 0;
  /**
  * Sets a sequence which identifies a solution (see above).
  *   @param iNo
  *   @param iShellOri
  *   @param iGuideOri
  */
  virtual HRESULT SetTangencyChoiceNo(const int iShellOri, const int iGuideOri, const int iNo) = 0;

  /**
  * Gets the reference (functional curve or guide surface).
  *   @param oElem
  *      Reference feature
  */
  virtual HRESULT GetReference(CATISpecObject_var & oElem) = 0;
  /**
  * Sets the reference (functional curve or guide surface).
  *   @param iElem
  *      Reference feature
  */
  virtual HRESULT SetReference(const CATISpecObject_var iElem) = 0;

  /**
  * Gets the value of a radius given its index.
  *   @param oElem
  *      Radius value
  *   @param iI
  *      Index of the radius (starting from one)
  */
  virtual HRESULT GetRadius(double & oElem, const int iI) = 0;
  /**
  * Gets the literal feature representing a radius given its index.
  *   @param oElem
  *      Radius literal feature
  *   @param iI
  *      Index of the radius (starting from one)
  *   @see CATICkeParm
  */
  virtual HRESULT GetRadius(CATICkeParm_var & oElem, const int iI) = 0;
  /**
  * Sets the value of a radius given its index.
  *   @param iElem
  *      Radius value
  *   @param iI
  *      Index of the radius (starting from one)
  */
  virtual HRESULT SetRadius(const double iElem, const int iI) = 0;
  /**
  * Sets the literal feature representing a radius given its index.
  *   @param iElem
  *      Radius literal feature
  *   @param iI
  *      Index of the radius (starting from one)
  *   @see CATICkeParm
  */
  virtual HRESULT SetRadius(const CATICkeParm_var iElem, const int iI) = 0;
  /**
  * Gets the number of radius.
  *   @param oI
  *      Number of radius
  */
  virtual HRESULT GetNbRadius(int & oI) = 0;
  /**
  * Removes all radius.
  */
  virtual HRESULT DelRadius() = 0;

  /**
  * Gets information about radius law.
  *   @param ParamStart
  *      Start radius literal feature
  *   @param ParamEnd
  *      End radius literal feature
  *   @param eType
  *      Type of law (from CATGSMBasicLawType enumeration): <BR>
  *       - CATGSMBasicLawType_None, <BR>
  *       - CATGSMBasicLawType_Constant, <BR>
  *       - CATGSMBasicLawType_Linear, <BR>
  *       - CATGSMBasicLawType_SType, <BR>
  *       - CATGSMBasicLawType_Advanced.
  *   @see CATICkeParm
  */
  virtual HRESULT GetRadiusLaw(CATICkeParm_var & ParamStart, CATICkeParm_var & ParamEnd, enum CATGSMBasicLawType & eType) = 0;
  /**
  * Sets information about radius law.
  *   @param ParamStart
  *      Start radius literal feature
  *   @param ParamEnd
  *      End radius literal feature
  *   @param eType
  *      Type of law (from CATGSMBasicLawType enumeration): <BR>
  *       - CATGSMBasicLawType_None, <BR>
  *       - CATGSMBasicLawType_Constant, <BR>
  *       - CATGSMBasicLawType_Linear, <BR>
  *       - CATGSMBasicLawType_SType, <BR>
  *       - CATGSMBasicLawType_Advanced.
  *   @see CATICkeParm
  */
  virtual HRESULT SetRadiusLaw(const CATICkeParm_var & ParamStart, const CATICkeParm_var & ParamEnd, const enum CATGSMBasicLawType eType) = 0;
  /**
  * Gets radius law feature.
  *   @param Elem
  *      Radius law feature
  *   @see CATICkeParm
  */
  virtual HRESULT GetRadiusLaw(CATICkeLaw_var & Elem) = 0;
  /**
  * Modify radius law feature.
  *   @param Elem
  *      Radius law feature
  *   @see CATICkeParm
  */
  virtual HRESULT SetRadiusLaw(const CATICkeLaw_var & Elem) = 0;
  /**
  * Gets radius law type.
  *   @param eType
  *      Type of law (from CATGSMBasicLawType enumeration): <BR>
  *       - CATGSMBasicLawType_None, <BR>
  *       - CATGSMBasicLawType_Constant, <BR>
  *       - CATGSMBasicLawType_Linear, <BR>
  *       - CATGSMBasicLawType_SType, <BR>
  *       - CATGSMBasicLawType_Advanced.
  *   @see CATGSMBasicLawType
  */
  virtual HRESULT GetRadiusLawType(enum CATGSMBasicLawType & eType) = 0;
  /**
  * Sets radius law type.
  *   @param eType
  *      Type of law (from CATGSMBasicLawType enumeration): <BR>
  *       - CATGSMBasicLawType_None, <BR>
  *       - CATGSMBasicLawType_Constant, <BR>
  *       - CATGSMBasicLawType_Linear, <BR>
  *       - CATGSMBasicLawType_SType, <BR>
  *       - CATGSMBasicLawType_Advanced.
  *   @see CATGSMBasicLawType
  */
  virtual HRESULT SetRadiusLawType(const enum CATGSMBasicLawType eType) = 0;
  /**
  * Gets information whether radius law has to be inverted or not.
  *   @param oInversion
  *      TRUE or FALSE (FALSE if not specified).
  *   @see CATGSMBasicLawType
  */
  virtual HRESULT GetRadiusLawInversion(CATBoolean & oInversion) = 0;
  /**
  * Sets information whether radius law has to be inverted or not.
  *   @param iInversion
  *      TRUE or FALSE.
  *   @see CATGSMBasicLawType
  */
  virtual HRESULT SetRadiusLawInversion(const CATBoolean iInversion) = 0;

  /**
  * Gets the value of an angle given its index.
  *   @param oElem
  *      Angle value
  *   @param iI
  *      Index of the angle (starting from one)
  */
  virtual HRESULT GetAngle(double & oElem, const int iI) = 0;
  /**
  * Gets the literal feature representing an angle given its index.
  *   @param oElem
  *      Angle literal feature
  *   @param iI
  *      Index of the angle (starting from one)
  *   @see CATICkeParm
  */
  virtual HRESULT GetAngle(CATICkeParm_var & oElem, const int iI) = 0;
  /**
  * Sets the value of an angle given its index.
  *   @param iElem
  *      Angle value
  *   @param iI
  *      Index of the angle (starting from one)
  */
  virtual HRESULT SetAngle(const double iElem, const int iI) = 0;
  /**
  * Sets the literal feature representing an angle given its index.
  *   @param iElem
  *      Angle literal feature
  *   @param iI
  *      Index of the angle (starting from one)
  *   @see CATICkeParm
  */
  virtual HRESULT SetAngle(const CATICkeParm_var iElem, const int iI) = 0;
  /**
  * Gets the number of angles.
  *   @param oI
  *      Number of angles
  */
  virtual HRESULT GetNbAngle(int & oI) = 0;
  /**
  * Removes all angles.
  */
  virtual HRESULT DelAngle() = 0;


  /**
  * Gets information about both angle laws (including advanced law features).
  *   @param FirstParamStart
  *      Start first angle literal feature, or law feature if advanced
  *   @param FirstParamEnd
  *      End first angle literal feature, or NULL_var if advanced
  *   @param eFirstType
  *      First type of law (from CATGSMBasicLawType enumeration): <BR>
  *       - CATGSMBasicLawType_None, <BR>
  *       - CATGSMBasicLawType_Constant, <BR>
  *       - CATGSMBasicLawType_Linear, <BR>
  *       - CATGSMBasicLawType_SType, <BR>
  *       - CATGSMBasicLawType_Advanced.
  *   @param SecondParamStart
  *      Start second angle literal feature, or law feature if advanced
  *   @param SecondParamEnd
  *      End second angle literal feature, or NULL_var if advanced
  *   @param eSecondType
  *      Second type of law (from CATGSMBasicLawType enumeration).
  */
  virtual HRESULT GetAngleLaws(CATISpecObject_var & FirstParamStart, CATISpecObject_var & FirstParamEnd, enum CATGSMBasicLawType & eFirstType, CATISpecObject_var & SecondParamStart, CATISpecObject_var & SecondParamEnd, enum CATGSMBasicLawType & eSecondType) = 0;
  /**
  * Gets information about both angle laws. PREFER PREVIOUS METHOD WHICH
  * INCLUDES ADVANCED LAW FEATURES.
  *   @param FirstParamStart
  *      Start first angle literal feature
  *   @param FirstParamEnd
  *      End first angle literal feature
  *   @param eFirstType
  *      First type of law (from CATGSMBasicLawType enumeration): <BR>
  *       - CATGSMBasicLawType_None, <BR>
  *       - CATGSMBasicLawType_Constant, <BR>
  *       - CATGSMBasicLawType_Linear, <BR>
  *       - CATGSMBasicLawType_SType, <BR>
  *       - CATGSMBasicLawType_Advanced.
  *   @param SecondParamStart
  *      Start second angle literal feature
  *   @param SecondParamEnd
  *      End second angle literal feature
  *   @param eSecondType
  *      Second type of law (from CATGSMBasicLawType enumeration).
  */
  virtual HRESULT GetAngleLaws(CATICkeParm_var & FirstParamStart, CATICkeParm_var & FirstParamEnd, enum CATGSMBasicLawType & eFirstType, CATICkeParm_var & SecondParamStart, CATICkeParm_var & SecondParamEnd, enum CATGSMBasicLawType & eSecondType) = 0;
  /**
  * Sets information about both angle laws (including advanced law features).
  *   @param FirstParamStart
  *      Start first angle literal feature, or law feature if advanced
  *   @param FirstParamEnd
  *      End first angle literal feature, or NULL_var if advanced
  *   @param eFirstType
  *      First type of law (from CATGSMBasicLawType enumeration): <BR>
  *       - CATGSMBasicLawType_None, <BR>
  *       - CATGSMBasicLawType_Constant, <BR>
  *       - CATGSMBasicLawType_Linear, <BR>
  *       - CATGSMBasicLawType_SType, <BR>
  *       - CATGSMBasicLawType_Advanced.
  *   @param SecondParamStart
  *      Start second angle literal feature, or law feature if advanced
  *   @param SecondParamEnd
  *      End second angle literal feature, or NULL_var if advanced
  *   @param eSecondType
  *      Second type of law (from CATGSMBasicLawType enumeration).
  */
  virtual HRESULT SetAngleLaws(const CATISpecObject_var & FirstParamStart, const CATISpecObject_var & FirstParamEnd, const enum CATGSMBasicLawType eFirstType, const CATISpecObject_var & SecondParamStart, const CATISpecObject_var & SecondParamEnd, const enum CATGSMBasicLawType eSecondType) = 0;
  /**
  * Sets information about both angle laws. PREFER PREVIOUS METHOD WHICH
  * INCLUDES ADVANCED LAW FEATURES.
  *   @param FirstParamStart
  *      Start first angle literal feature
  *   @param FirstParamEnd
  *      End first angle literal feature
  *   @param eFirstType
  *      First type of law (from CATGSMBasicLawType enumeration): <BR>
  *       - CATGSMBasicLawType_None, <BR>
  *       - CATGSMBasicLawType_Constant, <BR>
  *       - CATGSMBasicLawType_Linear, <BR>
  *       - CATGSMBasicLawType_SType.
  *   @param SecondParamStart
  *      Start second angle literal feature
  *   @param SecondParamEnd
  *      End second angle literal feature
  *   @param eSecondType
  *      Second type of law (from CATGSMBasicLawType enumeration except
  *      CATGSMBasicLawType_Advanced).
  */
  virtual HRESULT SetAngleLaws(const CATICkeParm_var & FirstParamStart, const CATICkeParm_var & FirstParamEnd, const enum CATGSMBasicLawType eFirstType, const CATICkeParm_var & SecondParamStart, const CATICkeParm_var & SecondParamEnd, const enum CATGSMBasicLawType eSecondType) = 0;
  /**
  * Gets angle law types.
  *   @param eFirstType
  *      First type of law (from CATGSMBasicLawType enumeration).
  *   @param eSecondType
  *      Second type of law (from CATGSMBasicLawType enumeration).
  *   @see CATGSMBasicLawType
  */
  virtual HRESULT GetAngleLawTypes(enum CATGSMBasicLawType & eFirstType, enum CATGSMBasicLawType & eSecondType) = 0;
  /**
  * Sets angle law types.
  *   @param eFirstType
  *      First type of law (from CATGSMBasicLawType enumeration).
  *   @param eSecondType
  *      Second type of law (from CATGSMBasicLawType enumeration).
  *   @see CATGSMBasicLawType
  */
  virtual HRESULT SetAngleLawTypes(const enum CATGSMBasicLawType eFirstType, const enum CATGSMBasicLawType eSecondType) = 0;

  /**
  * Gets information whether angle laws have to be inverted or not.
  *   @param oInversion1
  *      TRUE or FALSE (FALSE if not specified) for first angle law.
  *   @param oInversion2
  *      TRUE or FALSE (FALSE if not specified) for second angle law.
  *   @see CATGSMBasicLawType
  */
  virtual HRESULT GetAngleLawInversions(CATBoolean & oInversion1, CATBoolean & oInversion2) = 0;
  /**
  * Sets information whether angle laws have to be inverted or not.
  *   @param iInversion1
  *      TRUE or FALSE for first angle law.
  *   @param iInversion2
  *      TRUE or FALSE for second angle law.
  *   @see CATGSMBasicLawType
  */
  virtual HRESULT SetAngleLawInversions(const CATBoolean iInversion1, const CATBoolean iInversion2) = 0;


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
  * Gets trim option status.
  * Possible cases are : <BR>
  *  - CATGSMSweepTrimMode_None: no trim computed or undefined <BR>
  *  - CATGSMSweepTrimMode_On: trim computed
  *   @param oElem
  *      Trim option value
  *   @see CATGSMSweepTrimMode
  */
  virtual HRESULT GetTrimOption(enum CATGSMSweepTrimMode & oElem) = 0;
  /**
  * Sets trim option status.
  *   @param iElem
  *      Trim option value
  *   @see CATGSMSweepTrimMode
  */
  virtual HRESULT SetTrimOption(const enum CATGSMSweepTrimMode iElem) = 0;

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
CATDeclareHandler (CATIGSMSweepCircle, CATBaseUnknown);
#endif // CATIGSMSweepCircle_H

