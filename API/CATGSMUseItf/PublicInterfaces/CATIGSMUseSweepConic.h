/* -*-c++-*-    */
#ifndef CATIGSMUseSweepConic_H
#define CATIGSMUseSweepConic_H


// COPYRIGHT DASSAULT SYSTEMES 2000

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATBaseUnknown.h"

#include "CATBooleanDef.h"
#include "CATGSMUseItfExportedBy.h"
#include "CATGSMSweepDef.h"
#include "CATGSMBasicLawDef.h"
#include "CATGSMCanonicalDetectionDef.h"

class CATICkeParm_var;
class CATIMmiMechanicalFeature_var;
class CATICkeLaw_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID IID_CATIGSMUseSweepConic;
#else
extern "C" const IID IID_CATIGSMUseSweepConic;
#endif

/**
* Interace to conical sweep feature.
* <b>Role</b>: Allows you to access data of the conical sweep.
* @see CATIGSMUseFactory#CreateConicalSweep
*/

class ExportedByCATGSMUseItf CATIGSMUseSweepConic : public CATBaseUnknown
{

  CATDeclareInterface;

public: 

  /**
  * Gets a guide curve given its index (default = 1).
  *   @param oElem
  *      Guide curve feature.
  *   @param iI
  *      Guide curve index : 1 to 5.
  */
  virtual HRESULT GetGuide(CATIMmiMechanicalFeature_var & oElem, const int iI = 1) = 0;

  /**
  * Sets a guide curve given its index (default = 1).
  *   @param iElem
  *      Guide curve feature.
  *   @param iI
  *      Guide curve index : 1 to 5.
  */
  virtual HRESULT SetGuide(const CATIMmiMechanicalFeature_var iElem, const int iI = 1) = 0;

  /**
  * Insert a guide at a given position. Impossible if the number of guides
  * has already reached 5.
  *   @param iElem
  *      Guide curve feature.
  *   @param iI
  *      Guide curve index : 1 to 5.
  */
  virtual HRESULT InsertGuideAtPosition(const CATIMmiMechanicalFeature_var iElem, const int iI) = 0;

  /**
  * Removes a guide curve given its index (default = 1). Also removes tangency
  * element if specified.
  *   @param iI
  *      Guide curve index : 1 to 5. If 0, all guides are removed.
  */
  virtual HRESULT RemoveGuide(const int iI = 1) = 0;

  /**
  * Gets the number of guide curves.
  *   @param oI
  *      Number of guide curves.
  */
  virtual HRESULT GetNbGuide(int & oI) = 0;

  /**
  * Gets tangency surface or curve and its angle given the guide curve index.
  *   @param oElem
  *      Tangency surface or curve feature.
  *   @param oAngleStart
  *      Start tangency angle from surface or curve reference.
  *   @param oAngleEnd
  *      End tangency angle from surface or curve reference.
  *   @param oAngleLawType
  *      Type of law used for tangency angle from surface or curve reference.
  *   @param iI
  *      Guide curve index : 1 to 5.
  */
  virtual HRESULT GetTangency(CATIMmiMechanicalFeature_var & oElem, CATICkeParm_var & oAngleStart, CATICkeParm_var & oAngleEnd, enum CATGSMBasicLawType & oType, const int iI) = 0;

  /**
  * Sets tangency surface or curve and its angle given the guide curve index.
  *   @param iElem
  *      Tangency surface or curve feature.
  *   @param iAngleStart
  *      Start tangency angle from surface or curve reference.
  *   @param iAngleEnd
  *      End tangency angle from surface or curve reference.
  *   @param iType
  *      Type of law used for tangency angle from surface or curve reference.
  *   @param iI
  *      Guide curve index : 1 to 5.
  */
  virtual HRESULT SetTangency(const CATIMmiMechanicalFeature_var iElem, const CATICkeParm_var iAngleStart, const CATICkeParm_var iAngleEnd, const enum CATGSMBasicLawType & iType, const int iI) = 0;

  /**
  * Gets tangency surface or curve and its angle given the guide curve index.
  *   @param oElem
  *      Tangency surface or curve feature.
  *   @param oAngleLaw
  *      Start tangency angle from surface or curve reference.
  *   @param iI
  *      Guide curve index : 1 to 5.
  */
  virtual HRESULT GetTangency(CATIMmiMechanicalFeature_var & oElem, CATICkeLaw_var & oAngleLaw, const int iI) = 0;

  /**
  * Sets tangency surface or curve and its angle given the guide curve index.
  *   @param iElem
  *      Tangency surface or curve feature.
  *   @param iAngleLaw
  *      Start tangency angle from surface or curve reference.
  *   @param iI
  *      Guide curve index : 1 to 5.
  */
  virtual HRESULT SetTangency(const CATIMmiMechanicalFeature_var iElem, const CATICkeLaw_var iAngleLaw, const int iI) = 0;

  /**
  * Gets information whether tangency angle law has to be inverted or not
  * for a specified guide curve.
  *   @param iI
  *      Guide curve index : 1 to 5.
  *   @param oInversion
  *      TRUE or FALSE (FALSE if not specified).
  *   @see CATGSMBasicLawType
  */
  virtual HRESULT GetTangencyAngleLawInversion(const int iI, CATBoolean & oInversion) = 0;
  /**
  * Sets information whether tangency angle law has to be inverted or not
  * for a specified guide curve.
  *   @param iI
  *      Guide curve index : 1 to 5.
  *   @param iInversion
  *      TRUE or FALSE.
  *   @see CATGSMBasicLawType
  */
  virtual HRESULT SetTangencyAngleLawInversion(const int iI, const CATBoolean iInversion) = 0;

  /**
  * Removes tangency surface or curve and its angle given the guide curve index.
  *   @param iI
  *      Guide curve index : 1 to 5.
  */
  virtual HRESULT RemoveTangency(const int iI) = 0;

  /**
  * Gets the spine.
  *   @param oElem
  *      Spine feature.
  */

  virtual HRESULT GetSpine(CATIMmiMechanicalFeature_var & oElem) = 0;

  /**
  * Sets the spine.
  *   @param iElem
  *      Spine feature.
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
  * Gets the literal feature representing the conical parameter. If the parameter
  * is a law, oElem equals NULL_var and the method returns E_FAIL.
  *   @param oElem
  *      Parameter literal feature.
  *   @see CATICkeParm
  */
  virtual HRESULT GetParameter(CATICkeParm_var & oElem) = 0;

  /**
  * Gets the conical parameter value. If the parameter is a law, oElem equals 0
  * and the method returns E_FAIL.
  *   @param oElem
  *      Parameter value.
  *   @see CATICkeParm
  */
  virtual HRESULT GetParameter(double & oElem) = 0;

  /**
  * Sets the literal feature representing the conical parameter.
  *   @param iElem
  *      Parameter literal feature.
  *   @see CATICkeParm
  */
  virtual HRESULT SetParameter(const CATICkeParm_var iElem) = 0;

  /**
  * Sets the conical parameter value.
  *   @param iElem
  *      Parameter value.
  *   @see CATICkeParm
  */
  virtual HRESULT SetParameter(const double iElem) = 0;

  /**
  * Gets the literal features and the law type representing the conical parameter
  * law.
  *   @param oParamStart
  *      Start parameter literal feature.
  *   @param oParamEnd
  *      End parameter literal feature.
  *   @param oType
  *      Type of law (from CATGSMBasicLawType enumeration): <BR>
  *       - CATGSMBasicLawType_None, <BR>
  *       - CATGSMBasicLawType_Constant, <BR>
  *       - CATGSMBasicLawType_Linear, <BR>
  *       - CATGSMBasicLawType_SType, <BR>
  *       - CATGSMBasicLawType_Advanced.
  *   @see CATICkeParm
  */
  virtual HRESULT GetParameterLaw(CATICkeParm_var & oParamStart, CATICkeParm_var & oParamEnd, enum CATGSMBasicLawType & oType) = 0;

  /**
  * Gets the values and the law type representing the conical parameter law.
  *   @param oParamStart
  *      Parameter start value.
  *   @param oParamEnd
  *      Parameter end value.
  *   @param oType
  *      Type of law (from CATGSMBasicLawType enumeration): <BR>
  *       - CATGSMBasicLawType_None, <BR>
  *       - CATGSMBasicLawType_Constant, <BR>
  *       - CATGSMBasicLawType_Linear, <BR>
  *       - CATGSMBasicLawType_SType, <BR>
  *       - CATGSMBasicLawType_Advanced.
  *   @see CATICkeParm
  */
  virtual HRESULT GetParameterLaw(double & oParamStart, double & oParamEnd, enum CATGSMBasicLawType & oType) = 0;

  /**
  * Sets the literal features and the law type representing the conical parameter
  * law.
  *   @param iParamStart
  *      Start parameter literal feature.
  *   @param iParamEnd
  *      End parameter literal feature.
  *   @param iType
  *      Type of law (from CATGSMBasicLawType enumeration): <BR>
  *       - CATGSMBasicLawType_None, <BR>
  *       - CATGSMBasicLawType_Constant, <BR>
  *       - CATGSMBasicLawType_Linear, <BR>
  *       - CATGSMBasicLawType_SType, <BR>
  *       - CATGSMBasicLawType_Advanced.
  *   @see CATICkeParm
  */
  virtual HRESULT SetParameterLaw(const CATICkeParm_var iParamStart, const CATICkeParm_var iParamEnd, const enum CATGSMBasicLawType iType) = 0;

  /**
  * Sets the values and the law type representing the conical parameter law.
  *   @param iParamStart
  *      Parameter start value.
  *   @param iParamEnd
  *      Parameter end value.
  *   @param iType
  *      Type of law (from CATGSMBasicLawType enumeration): <BR>
  *       - CATGSMBasicLawType_None, <BR>
  *       - CATGSMBasicLawType_Constant, <BR>
  *       - CATGSMBasicLawType_Linear, <BR>
  *       - CATGSMBasicLawType_SType, <BR>
  *       - CATGSMBasicLawType_Advanced.
  *   @see CATICkeParm
  */
  virtual HRESULT SetParameterLaw(const double iParamStart, const double iParamEnd, const enum CATGSMBasicLawType iType) = 0;

  /**
  * Gets conical parameter law feature.
  *   @param Elem
  *      Conical parameter law feature
  *   @see CATICkeParm
  */
  virtual HRESULT GetParameterLaw(CATICkeLaw_var & oElem) = 0;
  /**
  * Sets conical parameter law feature.
  *   @param Elem
  *      Conical parameter law feature
  *   @see CATICkeParm
  */
  virtual HRESULT SetParameterLaw(const CATICkeLaw_var iElem) = 0;

  /**
  * Gets parameter law type.
  *   @param eType
  *      Type of law (from CATGSMBasicLawType enumeration): <BR>
  *       - CATGSMBasicLawType_None, <BR>
  *       - CATGSMBasicLawType_Constant, <BR>
  *       - CATGSMBasicLawType_Linear, <BR>
  *       - CATGSMBasicLawType_SType, <BR>
  *       - CATGSMBasicLawType_Advanced.
  *   @see CATGSMBasicLawType
  */
  virtual HRESULT GetParameterLawType(enum CATGSMBasicLawType & eType) = 0;

  /**
  * Sets parameter law type.
  *   @param eType
  *      Type of law (from CATGSMBasicLawType enumeration): <BR>
  *       - CATGSMBasicLawType_None, <BR>
  *       - CATGSMBasicLawType_Constant, <BR>
  *       - CATGSMBasicLawType_Linear, <BR>
  *       - CATGSMBasicLawType_SType, <BR>
  *       - CATGSMBasicLawType_Advanced.
  *   @see CATGSMBasicLawType
  */
  virtual HRESULT SetParameterLawType(const enum CATGSMBasicLawType eType) = 0;

  /**
  * Gets information whether parameter law has to be inverted or not.
  *   @param oInversion
  *      TRUE or FALSE (FALSE if not specified).
  *   @see CATGSMBasicLawType
  */
  virtual HRESULT GetParameterLawInversion(CATBoolean & oInversion) = 0;
  /**
  * Sets information whether parameter law has to be inverted or not.
  *   @param iInversion
  *      TRUE or FALSE.
  *   @see CATGSMBasicLawType
  */
  virtual HRESULT SetParameterLawInversion(const CATBoolean iInversion) = 0;

  /**
  * Removes conical sweep parameter, whether it is a single value or a law.
  */
  virtual HRESULT RemoveParameter() = 0;


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
  *     If canonical surfaces are detected or not.
  *     Possible values are CATGSMNoDetection and CATGSMCanonicalDetection.
  * @see CATGSMCanonicalSurfaceDetection
  */
  virtual    HRESULT GetCanonicalDetectionMode(CATGSMCanonicalSurfaceDetection & oDetection) = 0;

};
CATDeclareHandler (CATIGSMUseSweepConic, CATBaseUnknown);
#endif // CATIGSMUseSweepConic_H

