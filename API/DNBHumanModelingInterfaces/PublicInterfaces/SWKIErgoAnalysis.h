// COPYRIGHT DASSAULT SYSTEMES 2003

#ifndef _SWKIErgoAnalysis_h
#define _SWKIErgoAnalysis_h

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

// *****************************************************************************
// Framework DNBHumanModelingInterfaces
// Copyright Safework Inc.
// *****************************************************************************
//  Abstract:
//  ---------
//
//    SWKIErgoAnalysis interface.
//    This interface offers ergonomic analysis services.
//
// *****************************************************************************
//  Usage:
//  ------
//
// *****************************************************************************
//  Inheritance:
//  ------------
//
//    CATBaseUnknown
//
// *****************************************************************************
//  Main Methods:
//  -------------
//
//    PerformLiftLowerAnalysis
//    PerformPushPullAnalysis
//    PerformCarryAnalysis
//    GetRULASpecs
//    PerformRULAAnalysis
//    GetPushPullGuideLine
//    GetPushFreq
//    GetPushDist
//    GetPullDist
//    GetPullPopulationSample
//    GetCarryGuideLine
//    GetCarryFreq
//    GetCarryDist
//    GetCarryPopulationSample
// *****************************************************************************
//  History
//  -------
//
//  Author: Olivier Lamotte
//  Date  : 00/04/03
//  Goal  : Creation
//
//  Author: Jean-Guy AUGUSTIN
//  Date  : 00/09/26
//  Goal  : Revision
// *****************************************************************************
//
// --- System
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
//
// --- DNBHumanModelingInterfaces
class SWKIManikinPart;
class SWKIRULASpecs;
//
// --- DNBHumanModeling
class SWAnalysisResults;
//
// --- Mathematics
class CATMathAxis;

#ifdef _WINDOWS_SOURCE
#ifdef __SWKHumanModelingItf
#define ExportedBySWKHumanModelingItf __declspec(dllexport)
#else
#define ExportedBySWKHumanModelingItf __declspec(dllimport)
#endif
#else
#define ExportedBySWKHumanModelingItf
#endif


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySWKHumanModelingItf IID IID_SWKIErgoAnalysis;
#else
extern "C" const IID IID_SWKIErgoAnalysis;
#endif

/**
  *  This interface provides ergonomic analysis services.<br>
  *  It gathers all ergonomic analyses that can be performed
  *  on a manikin.<br>
  *  All manikins adhere to this interface.
  **/
class ExportedBySWKHumanModelingItf SWKIErgoAnalysis : public CATBaseUnknown
{
    CATDeclareInterface;

 public:
    
    enum SWKGuideLine
    {
        NIOSH1981,
        NIOSH1991,
        SnookCiriello1991
    };

    enum SWKCouplingCondition
    {
        CouplingGood,
        CouplingFair,
        CouplingPoor
    };

    /**
      * Perform a lift/lower analysis.
      * This analysis is based on two input postures,<br>
      * representing the initial and final body positions
      * required by the task under study.
      *
      * @param piInitialPosture
      * The initial posture of the manikin.
      *
      * @param piFinalPosture
      * The final posture of the manikin.
      *
      * @param piGuideLine
      * The guideline, which determines the formula to apply for the analysis.<br>
      * This parameter can take one of the following values:<br>
      * <strong>NIOSH1981</strong>, <strong>NIOSH1991</strong>
      * or <strong>SnookCiriello1991</strong>.
      *
      * @param piCouplingCondition
      * The coupling condition, which quantifies the quality of the
      * hand-to-object coupling.<br>
      * This parameter can take one of the following values:<br>
      * <strong>CouplingGood</strong>, <strong>CouplingFair</strong>
      * or <strong>CouplingPoor</strong>.<br>
      * <strong>N.B.:</strong> This parameter is taken into account only when<br>
      * the input guideline is <strong>NIOSH1991</strong>.  For <strong>NIOSH1981</strong>
      * and <strong>SnookCiriello1991</strong>,<br>the application can specify any value here.
      *
      * @param piLiftFrequency
      * Specifies the lift frequency (in number of lifts per second),
      * as required by the task.
      *
      * @param piLiftDuration
      * Specifies the duration of the work in hours per day.<br>
      * This parameter cannot take a value greater than <code>8.0</code>, otherwise, an<br>
      * error will be issued.
      *
      * @param piObjectWeightKg
      * Specifies the weight, in kilograms, of the object<br>
      * to lift during the execution of the task under study.<br>
      * <strong>N.B.:</strong>This parameter is taken into account only when<br>
      * the input guideline is <strong>NIOSH1991</strong>.  For <strong>NIOSH1981</strong>
      * and <strong>SnookCiriello1991</strong>,<br>the application can specify any nonnegative value here.
      *
      * @param piPopulationSample
      * Specifies the percentage of the population that should be able to<br>
      * perform the lift/lower task safely. This parameter can only take the following<br>
      * values: <code><strong>50.0</strong></code>, <code><strong>75.0</strong></code>
      * and <code><strong>90.0</strong></code>.<br>
      * <strong>N.B.:</strong> This parameter is taken into account only when
      * the input guideline is <strong>SnookCiriello1991</strong>.<br>For
      * <strong>NIOSH1981</strong> and <strong>NIOSH1991</strong>,
      * the application can specify any value here.
      *
      * @param piBodyPositionInitial
      * The transformation matrix that maps the coordinates of the manikin
      * into coordinates in the world referential, when the manikin is in
      * the initial posture.
      *
      * @param piBodyPositionFinal
      * The transformation matrix that maps the coordinates of the manikin
      * into coordinates in the world referential, when the manikin is in
      * the final posture.
      *
      * @return
      * An object containing the results of the analysis.<br>
      * Only the relevant fields of that data structure are set to valid values.
      *
      * @see SWAnalysisResults
      **/
    virtual void PerformLiftLowerAnalysis(SWKIManikinPart * piInitialPosture,
                                          SWKIManikinPart * piFinalPosture,
                                          SWKGuideLine piGuideLine,
                                          SWKCouplingCondition piCouplingCondition,
                                          double piLiftFrequency, double piLiftDuration,
                                          double piObjectWeightKg, double piPopulationSample,
                                          const CATMathAxis & piBodyPositionInitial,
                                          const CATMathAxis & piBodyPositionFinal,
                                          SWAnalysisResults & poResults) = 0;

    /**
      * Perform a push/pull analysis.
      *
      * @param piPosture
      * The posture of the manikin while performing the push/pull operation.
      *
      * @param piGuideLine
      * The guideline, which determines the formula to apply for this analysis.<br>
      * This parameter must always be <strong>SnookCiriello1991</strong>.
      *
      * @param piPushFrequency
      * Specifies the push frequency, in number of pushes per second,
      * as required by the task.
      *
      * @param piDistanceOfPush
      * Specifies the distance of push, expressed in centimeters.
      *
      * @param piDistanceOfPull
      * Specifies the distance of pull, expressed in centimeters.
      *
      * @param piPopulationSample
      * Specifies the percentage of the population that should be able to<br>
      * perform the push/pull safely. This parameter can only take the following<br>
      * values: <code><strong>50.0</strong></code>, <code><strong>75.0</strong></code>
      * and <code><strong>90.0</strong></code>.
      *

      * @param piUpdateSessionParams
      * Specifies if the analysis must update the vales returned by the <br>
      * methods that return the current session's push-pull analysis parameters.<br>
      * See the <code>GetPush...()</code> functions.
      * @return
      * An object containing the results of the analysis.<br>
      * Only the relevant fields of that data structure are set to valid values.
      *
      * @see SWAnalysisResults
      **/
      virtual void PerformPushPullAnalysis(SWKGuideLine piGuideLine, 
                                         double piPushFrequency,
                                         double piDistanceOfPush, 
                                         double piDistanceOfPull,
                                         double piPopulationSample,
                                         SWAnalysisResults & poResults,
                                         boolean piUpdateSessionParams = TRUE) = 0;

    /**
      * Perform a carry analysis.
      *
      * @param piPosture
      * The posture of the worker while performing the carry operation.
      *
      * @param piGuideLine
      * The guideline, which determines the formula to apply for this analysis.<br>
      * This parameter must always be <strong>SnookCiriello1991</strong>.
      *
      * @param piCarryFrequency
      * Specifies the carry frequency, in number of carries per second,
      * as required by the task.
      *
      * @param piDistanceOfCarry
      * Specifies the distance of carry, expressed in centimeters.
      *
      * @param piPopulationSample
      * Specifies the percentage of the population that should be able to<br>
      * perform the carry safely. This parameter can only take the following
      * values: <code><strong>50.0</strong></code>, <code><strong>75.0</strong></code>
      * &nbsp;and <code><strong>90.0</strong></code>.
      *

      * @param piUpdateSessionParams
      * Specifies if the analysis must update the vales returned by the <br>
      * methods that return the current session's carry analysis parameters.<br>
      * See the <code>GetCarryXXX()</code> functions.
      *
      * @return
      * An object containing the results of the analysis.<br>
      * Only the relevant fields of that data structure are set to valid values.
      *
      * @see SWAnalysisResults
      **/
    virtual void PerformCarryAnalysis(SWKGuideLine piGuideLine, 
                                      double piCarryFrequency,
                                      double piDistanceOfCarry, 
                                      double piPopulationSample,
                                      SWAnalysisResults & poResults,
                                      boolean piUpdateSessionParams = TRUE) = 0;

    /**
      * @return The set of specifications for the RULA analysis.<br>
      * When a manikin is created, its RULA specifications<br>
      * are set to default values.  Before performing a RULA<br>
      * analysis (cf. method <code>PerformRULAAnalysis()</code>), the<br>
      * application typically retrieves these specifications<br>
      * to modify them according to the problem under study.<br>
      * Then, a call to <code>PerformRULAAnalysis()</code> uses<br>
      * the specifications just defined or modified.
      *

      * @param piGetSessionParams
      * Use <code>TRUE</code> or the default to get the session RULA specs,<br>
      * those that are set in the RULA analysis dialog. Use <code>FALSE</code>
      * to get RULA specs that can be modified without impact on the session specs.
      *

      * @see SWKIRULASpecs
      **/

    virtual SWKIRULASpecs * GetRULASpecs(boolean piGetSessionParams = TRUE) = 0;
    
    /**
      * Perform the Rapid Upper Limb Assessment (RULA) analysis.
      * The set of specifications that are used to calculate
      * the RULA results are provided by a call to method
      * <code>GetRULASpecs()</code>.
      *
         // START GLX
          * @param piUseSessionParams
          * Specifies if the analysis must use the session RULA specs with <code>TRUE</code><br>
          * or the default, or use <code>FALSE</code> if the analysis must use the temporary Specs.
      * @return
      * An object containing the results of the analysis.<br>
      * Only the relevant fields of that data structure are set to valid values.
      *
      * @see SWAnalysisResults
      **/
      virtual void PerformRULAAnalysis(SWAnalysisResults & poResults, boolean piUseSessionParams = TRUE) = 0;
          // END GLX
    //  ---  PUSH/PULL  ---

    /**
      * Get the GuideLine used in the current session for the push-pull analysis.
      **/
    virtual SWKIErgoAnalysis::SWKGuideLine GetPushPullGuideLine() const = 0;

    /**
      * Get the push freqency used in the current session for the push-pull analysis.
      **/
    virtual double GetPushFreq() const = 0;

    /**
      * Get the push distance used in the current session for the push-pull analysis.
      **/
    virtual double GetPushDist() const = 0;

    /**
      * Get the pull distance used in the current session for the push-pull analysis.
      **/
    virtual double GetPullDist() const = 0;

    /**
      * Get the population sample used in the current session for the push-pull analysis.
      **/
    virtual double GetPullPopulationSample() const = 0;

    //  ---  CARRY  ---

    /**
      * Get the GuideLine used in the current session for the carry analysis.
      **/
    virtual SWKIErgoAnalysis::SWKGuideLine GetCarryGuideLine() const = 0;

    /**
      * Get the freqency used in the current session for the carry analysis.
      **/
    virtual double GetCarryFreq() const = 0;

    /**
      * Get the distance used in the current session for the carry analysis.
      **/
    virtual double GetCarryDist() const = 0;

    /**
      * Get the population sample used in the current session for the carry analysis.
      **/
    virtual double GetCarryPopulationSample() const = 0;
};

CATDeclareHandler(SWKIErgoAnalysis, CATBaseUnknown);

#endif
