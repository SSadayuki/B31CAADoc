#ifndef CATIGSMUseSweepSegment_H
#define CATIGSMUseSweepSegment_H
// 
// COPYRIGHT DASSAULT SYSTEMES 1999
//

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

//=============================================================================
//
// Class CATIGSMUseSweepSegment:
//
//
//=============================================================================

// System
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
// ObjectSpecsModeler
#include "CATIMmiMechanicalFeature.h"
// GSMInterfaces
#include "CATGSMUseItfExportedBy.h"
#include "CATGSMSweepDef.h"
#include "CATGSMBasicLawDef.h"
#include "CATGSMContextDef.h"
#include "CATGSMCanonicalDetectionDef.h"

class CATICkeParm_var;
class CATICkeLaw_var;
class CATListValCATBaseUnknown_var;
class CATListValCATIMmiMechanicalFeature_var;
class CATIGSMUseDirection_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID IID_CATIGSMUseSweepSegment;
#else
extern "C" const IID IID_CATIGSMUseSweepSegment;
#endif
/**
* Interface to linear sweep feature. 
* <b>Role</b>: Allows you to access (query and modifications) data 
* of the linear sweep.
* @see CATIGSMUseFactory#CreateLinearSweep
*/
class ExportedByCATGSMUseItf CATIGSMUseSweepSegment : public CATBaseUnknown
{

  CATDeclareInterface;

public: 

  /**
  * Gets first guide curve.
  *   @param oElem
  *      First guide curve feature.
  */
  virtual HRESULT GetGuideCrv(CATIMmiMechanicalFeature_var & oElem) = 0;
  /**
  * Modify first guide curve.
  *   @param iElem
  *      First guide curve feature.
  */
  virtual HRESULT SetGuideCrv(const CATIMmiMechanicalFeature_var iElem) = 0;
  /**
  * Gets a guide curve given its index.
  *   @param oElem
  *      Guide curve feature.
  *   @param iI
  *      Guide curve index : 1 or 2
  */
  virtual HRESULT GetGuideCrv(CATIMmiMechanicalFeature_var & oElem, const int iI) = 0;
  /**
  * Sets a guide curve given its index.
  *   @param iElem
  *      Guide curve feature.
  *   @param iI
  *      Guide curve index : 1 or 2
  */
  virtual HRESULT SetGuideCrv(const CATIMmiMechanicalFeature_var iElem, const int iI) = 0;
  /**
  * Gets the number of guide curves.
  *   @param oI
  *      Number of guide curves
  */
  virtual HRESULT GetNbGuideCrv(int & oI) = 0;
  /**
  * Removes all guide curves.
  */
  virtual HRESULT DelGuideCrv() = 0;

  /**
  * Gets first guide surface.
  *   @param oElem
  *      First guide surface feature.
  */
  virtual HRESULT GetGuideSurf(CATIMmiMechanicalFeature_var & oElem) = 0;
  /**
  * Sets first guide surface.
  *   @param iElem
  *      First guide surface feature.
  */
  virtual HRESULT SetGuideSurf(const CATIMmiMechanicalFeature_var iElem) = 0;
  /**
  * Gets a guide surface given its index.
  *   @param oElem
  *      Guide surface feature.
  *   @param iI
  *      Guide surface index : 1 or 2
  */
  virtual HRESULT GetGuideSurf(CATIMmiMechanicalFeature_var & oElem, const int iI) = 0;
  /**
  * Sets a guide surface given its index.
  *   @param iElem
  *      Guide surface feature.
  *   @param iI
  *      Guide surface index : 1 or 2
  */
  virtual HRESULT SetGuideSurf(const CATIMmiMechanicalFeature_var iElem, const int iI) = 0;
  /**
  * Gets the number of guide surfaces.
  *   @param oI
  *      Number of guide surfaces
  */
  virtual HRESULT GetNbGuideSurf(int & oI) = 0;
  /**
  * Removes all guide surfaces.
  */
  virtual HRESULT DelGuideSurf() = 0;

  /**
  * Gets the spine.
  *   @param oElem
  *      Spine feature
  */
  virtual HRESULT GetSpine(CATIMmiMechanicalFeature_var & oElem) = 0;
  /**
  * Sets the spine.
  *   @param iElem
  *      Spine feature
  */
  virtual HRESULT SetSpine(const CATIMmiMechanicalFeature_var iElem) = 0;

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
  virtual HRESULT GetLongitudinalRelimiters(CATIMmiMechanicalFeature_var & oElem1, CATBoolean & boInv1, CATIMmiMechanicalFeature_var & oElem2, CATBoolean & boInv2) = 0;
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
  virtual HRESULT SetLongitudinalRelimiters(const CATIMmiMechanicalFeature_var & iElem1, const CATBoolean biInv1, const CATIMmiMechanicalFeature_var & iElem2, const CATBoolean biInv2) = 0;


  /**
  * Gets linear sweep case number (also called mode). 
  * Possible cases are: <BR>
  *  - CATGSMLinearSweep_None: unidentified mode <BR>
  *  - CATGSMLinearSweep_TwoGuides: two guide curves and two possible
  *     length values <BR>
  *  - CATGSMLinearSweep_GuideAndAngleCurve: one guide curve, one reference
  *     angle curve, one angle value and two length values <BR>
  *  - CATGSMLinearSweep_GuideAndMiddle: two guide curves with one given as
  *     middle curve <BR>
  *  - CATGSMLinearSweep_GuideAndRefSurfaceAngle: one guide curve lying on
  *     a reference surface, an angle value and two length values <BR>
  *  - CATGSMLinearSweep_GuideAndTangencySurface: one guide curve
  *     and one tangency surface <BR>
  *  - CATGSMLinearSweep_GuideAndDraftDirection: one guide curve
  *     and a draft direction <BR>
  *  - CATGSMLinearSweep_TwoTangencySurfaces: one spine (or guide curve)
  *     and two tangency surfaces
  *   @param oElem
  *      Case number
  *   @see CATGSMLinearSweepCase
  */
  virtual HRESULT GetMode(enum CATGSMLinearSweepCase & oElem) = 0;
  /**
  * Sets linear sweep case number.
  *   @param iElem
  *      Case number
  *   @see CATGSMLinearSweepCase
  */
  virtual HRESULT SetMode(const enum CATGSMLinearSweepCase iElem) = 0;

  /**
  * Gets a sequence which identifies a solution amongst all possibilities
  * of a line-profile swept surface, case CATGSMLinearSweep_GuideAndTangencySurface.
  *   @param oSurfOri
  *      This orientation determines the location of the results with regard to
  *      the surface. Possible values are: <BR>
  *      * +1 : the result is in the semi-space defined by the normal to the surface, <BR>
  *      * -1 : the result is in the semi-space defined by the opposite to the normal to the surface, <BR>
  *      * 0  : no orientation is specified, all the results are output, <BR>
  *      * 2  : the result changes of semi-space along the spine.
  *   @param oCrvOri
  *      This orientation determines the location of the results with regard to
  *      the guide curve (CATGSMLinearSweep_GuideAndTangencySurface);
  *      let's define a trihedron with the guide curve, the normal to the surface
  *      and the tangent to the linear profile, then possible values are: <BR>
  *      * +1 : the result is such that the triedron is counter clockwise, <BR>
  *      * -1 : the result is such that the triedron is clockwise, <BR>
  *      * 0  : no orientation is specified, all the results are output, <BR>
  *      * 2  : the orientation of the trihedron changes along the spine.
  *   @param oNo
  *      Given the previous orientations, solution number in a distance ordered list.
  */
  virtual HRESULT GetChoiceNo(int & oSurfOri, int & oCrvOri, int & oNo) = 0;
  /**
  * Sets a sequence which identifies a solution (see above), case CATGSMLinearSweep_GuideAndTangencySurface.
  *   @param iNo
  *   @param iSurfOri
  *   @param iCrvOri
  */
  virtual HRESULT SetChoiceNo(const int iSurfOri, const int iCrvOri, const int iNo) = 0;

  /**
  * Gets a sequence which identifies a solution amongst all possibilities
  * of a line-profile swept surface, case CATGSMLinearSweep_TwoTangencySurfaces.
  *   @param oSurfOri1
  *      This orientation determines the location of the results with regard to
  *      the first surface. Possible values are: <BR>
  *      * +1 : the result is in the semi-space defined by the normal to the surface, <BR>
  *      * -1 : the result is in the semi-space defined by the opposite to the normal to the , <BR>
  *      * 0  : no orientation is specified, all the results are output, <BR>
  *      * 2  : the result changes of semi-space along the spine. <BR>
  *   @param oSurfOri2
  *      This orientation determines the location of the results with regard to
  *      the second surface.
  *   @param oSurfCouplOri1
  *      This orientation determines the location of the results with regard to
  *      the triedron defined by the the spine, the normal to the first surface and
  *      the tangent to the linear profile. Possible values are: <BR>
  *      * +1 : the output results are such that the triedron is counter clockwise, <BR>
  *      * -1 : the output results are such that the triedron is clockwise, <BR>
  *      * 0  : no orientation is specified, all the results are output, <BR>
  *      * 2  : the orientation of the trihedron changes along the spine.
  *   @param oSurfCouplOri2
  *      This orientation determines the location of the results with regard to
  *      the triedron defined by the the spine, the normal to the second surface and
  *      the tangent to the linear profile.
  *   @param oNo
  *      Given the previous orientations, solution number in a distance ordered list.
  */
  virtual HRESULT GetChoiceNoSurfaces(int & oSurfOri1, int & oSurfOri2, int & oSurfCouplOri1, int & oSurfCouplOri2, int & oNo) = 0;
  /**
  * Sets a sequence which identifies a solution (see above), case CATGSMLinearSweep_TwoTangencySurfaces.
  *   @param iNo
  *   @param iFirstOri
  *   @param iSecondOri
  */
  virtual HRESULT SetChoiceNoSurfaces(const int iSurfOri1, const int iSurfOri2, const int iSurfCouplOri1, const int iSurfCouplOri2, const int iNo) = 0;

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
  * Gets information about angular law.
  *   @param ParamStart
  *      Start angle literal feature
  *   @param ParamEnd
  *      End angle literal feature
  *   @param eType
  *      Type of law (from CATGSMBasicLawType enumeration): <BR>
  *       - CATGSMBasicLawType_None, <BR>
  *       - CATGSMBasicLawType_Constant, <BR>
  *       - CATGSMBasicLawType_Linear, <BR>
  *       - CATGSMBasicLawType_SType, <BR>
  *       - CATGSMBasicLawType_Advanced.
  *   @see CATICkeParm, CATGSMBasicLawType
  */
  virtual HRESULT GetAngularLaw(CATICkeParm_var & ParamStart, CATICkeParm_var & ParamEnd, enum CATGSMBasicLawType & eType) = 0;
  /**
  * Sets information about angular law.
  *   @param ParamStart
  *      Start angle literal feature
  *   @param ParamEnd
  *      End angle literal feature
  *   @param eType
  *      Type of law (from CATGSMBasicLawType enumeration): <BR>
  *       - CATGSMBasicLawType_None, <BR>
  *       - CATGSMBasicLawType_Constant, <BR>
  *       - CATGSMBasicLawType_Linear, <BR>
  *       - CATGSMBasicLawType_SType, <BR>
  *       - CATGSMBasicLawType_Advanced.
  *   @see CATICkeParm, CATGSMBasicLawType
  */
  virtual HRESULT SetAngularLaw(const CATICkeParm_var & ParamStart, const CATICkeParm_var & ParamEnd, const enum CATGSMBasicLawType eType) = 0;
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
  * Gets angular law type.
  *   @param eType
  *      Type of law (from CATGSMBasicLawType enumeration): <BR>
  *       - CATGSMBasicLawType_None, <BR>
  *       - CATGSMBasicLawType_Constant, <BR>
  *       - CATGSMBasicLawType_Linear, <BR>
  *       - CATGSMBasicLawType_SType, <BR>
  *       - CATGSMBasicLawType_Advanced.
  *   @see CATGSMBasicLawType
  */
  virtual HRESULT GetAngularLawType(enum CATGSMBasicLawType & eType) = 0;
  /**
  * Sets angular law type.
  *   @param eType
  *      Type of law (from CATGSMBasicLawType enumeration): <BR>
  *       - CATGSMBasicLawType_None, <BR>
  *       - CATGSMBasicLawType_Constant, <BR>
  *       - CATGSMBasicLawType_Linear, <BR>
  *       - CATGSMBasicLawType_SType, <BR>
  *       - CATGSMBasicLawType_Advanced.
  *   @see CATGSMBasicLawType
  */
  virtual HRESULT SetAngularLawType(const enum CATGSMBasicLawType eType) = 0;

  /**
  * Gets information whether angular law has to be inverted or not.
  *   @param oInversion
  *      TRUE or FALSE (FALSE if not specified).
  *   @see CATGSMBasicLawType
  */
  virtual HRESULT GetAngularLawInversion(CATBoolean & oInversion) = 0;
  /**
  * Sets information whether angular law has to be inverted or not.
  *   @param iInversion
  *      TRUE or FALSE.
  *   @see CATGSMBasicLawType
  */
  virtual HRESULT SetAngularLawInversion(const CATBoolean iInversion) = 0;

  /**
  * Gets the value of a length given its index.
  *   @param oElem
  *      Length value
  *   @param iI
  *      Index of the length (starting from one)
  */
  virtual HRESULT GetLength(double & oElem, const int iI) = 0;
  /**
  * Gets the literal feature representing an length given its index.
  *   @param oElem
  *      Length literal feature
  *   @param iI
  *      Index of the length (starting from one)
  *   @see CATICkeParm
  */
  virtual HRESULT GetLength(CATICkeParm_var & oElem, const int iI) = 0;
  /**
  * Sets the value of a length given its index.
  *   @param iElem
  *      Length value
  *   @param iI
  *      Index of the length (starting from one)
  */
  virtual HRESULT SetLength(const double iElem, const int iI) = 0;
  /**
  * Sets the literal feature representing an length given its index.
  *   @param iElem
  *      Length literal feature
  *   @param iI
  *      Index of the length (starting from one)
  *   @see CATICkeParm
  */
  virtual HRESULT SetLength(const CATICkeParm_var iElem, const int iI) = 0;
  /**
  * Gets the number of lengths.
  *   @param oI
  *      Number of lengths
  */
  virtual HRESULT GetNbLength(int & oI) = 0;
  /**
  * Removes all lengths.
  */
  virtual HRESULT DelLength() = 0;

  /**
  * Gets information about both length laws (including advanced law features).
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
  *   @see CATICkeParm, CATGSMBasicLawType
  */
  virtual HRESULT GetLengthLaws(CATIMmiMechanicalFeature_var & FirstParamStart, CATIMmiMechanicalFeature_var & FirstParamEnd, enum CATGSMBasicLawType & eFirstType, CATIMmiMechanicalFeature_var & SecondParamStart, CATIMmiMechanicalFeature_var & SecondParamEnd, enum CATGSMBasicLawType & eSecondType) = 0;
  /**
  * Gets information about both length laws. PREFER PREVIOUS METHOD WHICH
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
  *   @see CATICkeParm, CATGSMBasicLawType
  */
  virtual HRESULT GetLengthLaws(CATICkeParm_var & FirstParamStart, CATICkeParm_var & FirstParamEnd, enum CATGSMBasicLawType & eFirstType, CATICkeParm_var & SecondParamStart, CATICkeParm_var & SecondParamEnd, enum CATGSMBasicLawType & eSecondType) = 0;
  /**
  * Sets information about both length laws (including advanced law features).
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
  *   @see CATICkeParm, CATGSMBasicLawType
  */
  virtual HRESULT SetLengthLaws(const CATIMmiMechanicalFeature_var & FirstParamStart, const CATIMmiMechanicalFeature_var & FirstParamEnd, const enum CATGSMBasicLawType eFirstType, const CATIMmiMechanicalFeature_var & SecondParamStart, const CATIMmiMechanicalFeature_var & SecondParamEnd, const enum CATGSMBasicLawType eSecondType) = 0;
  /**
  * Sets information about both length laws. PREFER PREVIOUS METHOD WHICH
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
  *   @see CATICkeParm, CATGSMBasicLawType
  */
  virtual HRESULT SetLengthLaws(const CATICkeParm_var & FirstParamStart, const CATICkeParm_var & FirstParamEnd, const enum CATGSMBasicLawType eFirstType, const CATICkeParm_var & SecondParamStart, const CATICkeParm_var & SecondParamEnd, const enum CATGSMBasicLawType eSecondType) = 0;
  /**
  * Gets length law types.
  *   @param eFirstType
  *      First type of law (from CATGSMBasicLawType enumeration).
  *   @param eSecondType
  *      Second type of law (from CATGSMBasicLawType enumeration).
  *   @see CATGSMBasicLawType
  */
  virtual HRESULT GetLengthLawTypes(enum CATGSMBasicLawType & eFirstType, enum CATGSMBasicLawType & eSecondType) = 0;
  /**
  * Sets length law types.
  *   @param eFirstType
  *      First type of law (from CATGSMBasicLawType enumeration).
  *   @param eSecondType
  *      Second type of law (from CATGSMBasicLawType enumeration).
  *   @see CATGSMBasicLawType
  */
  virtual HRESULT SetLengthLawTypes(const enum CATGSMBasicLawType eFirstType, const enum CATGSMBasicLawType eSecondType) = 0;

  /**
  * Gets information whether length laws have to be inverted or not.
  *   @param oInversion1
  *      TRUE or FALSE (FALSE if not specified) for first length law.
  *   @param oInversion2
  *      TRUE or FALSE (FALSE if not specified) for second length law.
  *   @see CATGSMBasicLawType
  */
  virtual HRESULT GetLengthLawInversions(CATBoolean & oInversion1, CATBoolean & oInversion2) = 0;
  /**
  * Sets information whether length laws have to be inverted or not.
  *   @param iInversion1
  *      TRUE or FALSE for first length law.
  *   @param iInversion2
  *      TRUE or FALSE for second length law.
  *   @see CATGSMBasicLawType
  */
  virtual HRESULT SetLengthLawInversions(const CATBoolean iInversion1, const CATBoolean iInversion2) = 0;


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
  * Gets linear swept surface with draft direction computation mode:
  * CATGSMLinearDraftSweepComp_Square for square,
  * CATGSMLinearDraftSweepComp_ConeEnvelop for cone envelop.
  *   @param oElem
  *      Computation mode
  */
  virtual HRESULT GetDraftComputationMode(enum CATGSMLinearDraftSweepComp & oElem) = 0;
  /**
  * Sets linear swept surface with draft direction computation mode:
  * CATGSMLinearDraftSweepComp_Square for square,
  * CATGSMLinearDraftSweepComp_ConeEnvelop for cone envelop.
  *   @param iElem
  *      Computation mode
  */
  virtual HRESULT SetDraftComputationMode(const enum CATGSMLinearDraftSweepComp iElem) = 0;


  /**
  * Gets draft direction.
  *   @param oElem
  *      Direction feature
  */
  virtual HRESULT GetDraftDirection(CATIGSMUseDirection_var & oElem) = 0;
  /**
  * Sets draft direction.
  *   @param iElem
  *      Direction feature
  */
  virtual HRESULT SetDraftDirection(const CATIGSMUseDirection_var & iElem) = 0;

  /**
  * Gets geometrical elements and values necessary for draft angle definition.
  * There can be three possibilities: 1) a list of curves and a list of
  * angular parameters (case: constant angles by G1 section), 2) a list
  * of points and a list of angular parameters (case: variable angle
  * with given values at given points), 3) no geometry and only one
  * angular parameter for the whole sweeping operation.
  *   @param oListLoc
  *      List of geometrical elements
  *   @param oListVal
  *      List of angular parameters
  */
  virtual HRESULT GetDraftAngleDefinitionLocations(CATListValCATIMmiMechanicalFeature_var & oListLoc, CATListValCATBaseUnknown_var & oListVal) = 0;
  /**
  * Adds a geometrical element and a value necessary for draft angle definition.
  *   @param iLoc
  *      Geometrical element
  *   @param iVal
  *      Angular parameter
  */
  virtual HRESULT AddDraftAngleDefinitionLocation(const CATIMmiMechanicalFeature_var & iLoc, const CATICkeParm_var & iVal) = 0;
  /**
  * Inserts a geometrical element and a value necessary for draft angle definition
  * before a given position in the lists.
  *   @param iLoc
  *      Geometrical element
  *   @param iVal
  *      Angular parameter
  *   @param iPos
  *      Position in lists
  */
  virtual HRESULT InsertDraftAngleDefinitionLocationBeforePos(const CATIMmiMechanicalFeature_var & iLoc, const CATICkeParm_var & iVal, const int iPos) = 0;
  /**
  * Inserts a geometrical element and a value necessary for draft angle definition
  * after a given position in the lists.
  *   @param iLoc
  *      Geometrical element
  *   @param iVal
  *      Angular parameter
  *   @param iPos
  *      Position in lists
  */
  virtual HRESULT InsertDraftAngleDefinitionLocationAfterPos(const CATIMmiMechanicalFeature_var & iLoc, const CATICkeParm_var & iVal, const int iPos) = 0;
  /**
  * Removes a geometrical element and a value necessary for draft angle definition
  * at a given position in the lists.
  *   @param iPos
  *      Position in lists
  */
  virtual HRESULT RemoveDraftAngleDefinitionLocationPosition(const int iPos) = 0;
  /**
  * Removes all geometrical elements and values necessary for draft angle definition.
  */
  virtual HRESULT RemoveAllDraftAngleDefinitionLocations() = 0;


  /**
  * Gets first length definition for linear swept surfaces (for draft surfaces
  * only, so far).
  *   @param oElem
  *     CATGSMLinearSweepLengthType_None: undefined length type,<br>
  *     CATGSMLinearSweepLengthType_Standard: length of the swept line in
  *       the sweeping plane from guide curve,<br>
  *     CATGSMLinearSweepLengthType_FromCurve: no numerical value is required,
  *       equivalent to standard length at zero,<br>
  *     CATGSMLinearSweepLengthType_Reference: up to or from a geometrical
  *       reference (a surface),<br>
  *     CATGSMLinearSweepLengthType_FromExtremum: only for draft surfaces,
  *       length computed in the draft direction from an extremum point on
  *       the guide curve (available from V5R8SP3),<br>
  *     CATGSMLinearSweepLengthType_AlongSurface: only for draft surfaces,
  *       length will be used in a way similar to euclidean parallel curve
  *       distance on the swept surface (available from V5R11)
  */
  virtual HRESULT GetFirstLengthDefinitionType(enum CATGSMLinearSweepLengthType & oType, CATIMmiMechanicalFeature_var & oElem) = 0;
  /**
  * Sets first length definition for linear swept surfaces (for draft surfaces
  * only, so far).
  *   @param iElem
  *      Length type
  */
  virtual HRESULT SetFirstLengthDefinitionType(const enum CATGSMLinearSweepLengthType iType, const CATIMmiMechanicalFeature_var & iElem = NULL_var) = 0;
  /**
  * Gets second length definition for linear swept surfaces (for draft surfaces
  * only, so far).
  *   @param oElem
  *      Length type
  */
  virtual HRESULT GetSecondLengthDefinitionType(enum CATGSMLinearSweepLengthType & oType, CATIMmiMechanicalFeature_var & oElem) = 0;
  /**
  * Sets second length definition for linear swept surfaces (for draft surfaces
  * only, so far).
  *   @param iElem
  *      Length type
  */
  virtual HRESULT SetSecondLengthDefinitionType(const enum CATGSMLinearSweepLengthType iType, const CATIMmiMechanicalFeature_var & iElem = NULL_var) = 0;

  /**
  * Gets trim option status for the first (or only) tangency surface.
  * Possible cases are : <BR>
  *  - CATGSMSweepTrimMode_None: no trim computed or undefined, <BR>
  *  - CATGSMSweepTrimMode_On: trim computed.
  *   @param oOption
  *      Trim option value
  *   @see CATGSMSweepTrimMode
  */
  virtual HRESULT GetTrimOption(enum CATGSMSweepTrimMode & oOption) = 0;
  /**
  * Sets trim option status for the first (or only) tangency surface.
  *   @param iOption
  *      Trim option value
  *   @see CATGSMSweepTrimMode
  */
  virtual HRESULT SetTrimOption(const enum CATGSMSweepTrimMode iOption) = 0;

  /**
  * Gets trim option statuses for both tangency surfaces.
  * Possible cases are : <BR>
  *  - CATGSMSweepTrimMode_None: no trim computed or undefined, <BR>
  *  - CATGSMSweepTrimMode_On: trim computed.
  *   @param oOption1
  *      Trim option value for the first tangency surface
  *   @param oOption2
  *      Trim option value for the second tangency surface
  *   @see CATGSMSweepTrimMode
  */
  virtual HRESULT GetTrimOptions(enum CATGSMSweepTrimMode & oOption1, enum CATGSMSweepTrimMode & oOption2) = 0;
  /**
  * Sets trim option statuses for both tangency surfaces.
  *   @param iOption1
  *      Trim option value for the first tangency surface
  *   @param iOption2
  *      Trim option value for the second tangency surface
  *   @see CATGSMSweepTrimMode
  */
  virtual HRESULT SetTrimOptions(const enum CATGSMSweepTrimMode iOption1, const enum CATGSMSweepTrimMode iOption2) = 0;

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
  *     If canonical surfaces are detected.
  *     Possible values are CATGSMNoDetection and CATGSMCanonicalDetection.
  * @see CATGSMCanonicalSurfaceDetection
  */
  virtual    HRESULT SetCanonicalDetectionMode(CATGSMCanonicalSurfaceDetection iDetection = CATGSMNoDetection) = 0;

  /**
  * Gets information about detection of canonical surfaces of the output surface.
  *   @param oDetection
  *     If canonical surfaces are detected.
  *     Possible values are CATGSMNoDetection and CATGSMCanonicalDetection.
  * @see CATGSMCanonicalSurfaceDetection
  */
  virtual    HRESULT GetCanonicalDetectionMode(CATGSMCanonicalSurfaceDetection & oDetection) = 0;

};

CATDeclareHandler (CATIGSMUseSweepSegment, CATBaseUnknown);

#endif // CATIGSMUseSweepSegment_H

