// COPYRIGHT DASSAULT SYSTEMES 2004

#ifndef SWKIRULASpecs_h
#define SWKIRULASpecs_h

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
//    This interface is used to set up input specifications for the RULA 
//    ergonomic analysis.
//
// *****************************************************************************
//  Usage:
//  ------
//
//    Use in conjunction with interface SWKIErgoAnalysis.
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
//    SetSpec
//    GetScore
//    GetSpec
//    GetDefaultPercentage
//    Reset
//    GetNumberOfAngleRanges
//    GetAngleRangeAtIndex
//    GetColor
//    GetColor
//    IsArmAbducted
//    IsShoulderRaised
//    IsArmOutToSide
//    IsWristBent
//    IsWristTwisted
//    IsNeckTwisted
//    IsNeckSideBending
//    IsTrunkTwisted
//    IsTrunkSideBending
//    IsInWristAndArm
//    IsInNeckTrunkAndLeg
//    IsInRULAColoring
//    HasMaxScore
// *****************************************************************************
//  History
//  -------
//
//  Author: Jean-Guy AUGUSTIN
//  Date  : 04/09/09
//  Goal  : Creation
// *****************************************************************************
//
// --- System
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
//
// --- DNBHumanModelingInterfaces
#include "SWKEnums.h"
#include "SWShortNames.h"
//
//
// --- DNBHumanModeling
class SWAnalysisResults;

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
extern ExportedBySWKHumanModelingItf IID IID_SWKIRULASpecs;
#else
extern "C" const IID IID_SWKIRULASpecs;
#endif

/**
  * This interface is used to initialize the RULA specifications
  * for a RULA analysis to be conducted on a manikin.
  * A RULA specifications object is associated to one manikin.
  * The application may choose to run the RULA analysis with
  * the default values in the RULA specifications, or it
  * can customize the specifications by overriding the value of
  * one or several attributes.
  **/
class ExportedBySWKHumanModelingItf SWKIRULASpecs : public CATBaseUnknown
{
	CATDeclareInterface;

 public:

	enum SWKRULAScores
	{
		FinalUpperArmScore = 0,
		FinalForearmScore = 1,
		FinalWristScore = 2,
		FinalWristTwistScore = 3,
		FinalPostureAScore = 4,
		FinalMuscleScore = 5,
		FinalForceLoadScore = 6,
		FinalWristAndArmScore = 7,
		FinalNeckScore = 8,
		FinalTrunkScore = 9,
		FinalLegScore = 10,
		FinalPostureBScore = 11,
		FinalNeckTrunkAndLegScore = 12,
		FinalScoreOverall = 13
	};

	/**
	  * Set a score for a specific angle range on one body part.
	  *
	  * @param piBodyPart The body part
	  * @param piMinAngleValue The lower value of the range, in radians.
	  * @param piMaxAngleValue The upper value of the range, in radians.
	  * @param piScore The associated score, which must be a non-negative
	  * number between 1 and 6.
	  *
	  * @return A status indicating whether the input parameters are valid or not.
	  **/
	virtual HRESULT SetSpec(const SWKEBodyPart & piBodyPart, double piMinAngleValue,
							double piMaxAngleValue, unsigned piScore) = 0;

	/**
	  * Set a value to a RULA-specific attribute.
	  *
	  * @param piRULAAttribute The RULA attribute to set.
	  * @param piValue The new value for the attribute.
	  *
	  * @return A status indicating whether the input parameters are valid or not.
	  **/
	virtual HRESULT SetSpec(const SWKERULAAttr & piRULAAttribute, 
							const SWKERULAValue & piValue) = 0;

	/**
	  * Set a value to a RULA-specific attribute.
	  *
	  * @param piRULAAttribute The RULA attribute to set.
	  * @param piValue The new value for the attribute.
	  *
	  * @return A status indicating whether the input parameters are valid or not.
	  **/
	virtual HRESULT SetSpec(const SWKERULAAttr & piRULAAttribute, double piValue) = 0;

	/**
	  * Get the score corresponding to the segment "piShortName"
	  *
	  * @param piShortName The concerned body part.
	  * @param piResults Results coming from the call to
	  * <code>SWKIErgoAnalysis::PerformRULAAnalysis()</code>.
	  * @param poScore The score corresponding to the segment, given as output.
	  *
	  * @return A status indicating whether the input parameters are valid or not.
	  **/
	virtual HRESULT GetScore(const SWShortName & piShortName,
							 const SWAnalysisResults & piResults, int & poScore) const = 0;

	/**
	  * Get the score corresponding to the DOF value on the body.
	  *
	  * @param piBodyPart The concerned body part.
	  * @param poValue The current value found on the body, from which the score is calculated.
	  * @param poScore The score corresponding to that value, given as output.
	  *
	  * @return A status indicating whether the input parameters are valid or not.
	  **/
	virtual HRESULT GetScore(const SWKEBodyPart & piBodyPart, double & poValue, 
							 unsigned & poScore) const = 0;

	/**
	  * Get the value of a special RULA attribute.
	  *
	  * @param piRULAAttribute The attribute name.
	  * @param poValue The value of that attribute, given as output.
	  *
	  * @return A status indicating whether the input parameters are valid or not.
	  **/
	virtual HRESULT GetSpec(const SWKERULAAttr & piRULAAttribute,
							SWKERULAValue & poValue) const = 0;

	/**
	  * Get the value of a special RULA attribute.
	  *
	  * @param piRULAAttribute The attribute name.
	  * @param poValue The value of that attribute, given as output.
	  *
	  * @return A status indicating whether the input parameters are valid or not.
	  **/
	virtual HRESULT GetSpec(const SWKERULAAttr & piRULAAttribute, double & poValue) const = 0;

	/**
	  * Get the default value of a special RULA attribute, as a percentage.
	  *
	  * @param piRULAAttribute The attribute name.
	  * @param poValue The percentage for that attribute, given as output.
	  *
	  * @return A status indicating whether the input parameters are valid or not.
	  **/
	virtual HRESULT GetDefaultPercentage(const SWKERULAAttr & piRULAAttribute,
										 double & poPercentage) = 0;

	/**
	  * Resets all the angle values of the RULA specs.<br>
	  * <br>
	  * <strong>N.B.</strong> : Not all RULA inputs are reset by this method.
	  * The reset inputs include : ShoulderElevation, ArmAbduction, ArmRotation,
	  * WristDeviation, WristTwist, NeckTwist, NeckSideBend, TrunkTwist,
	  * TrunkSideBend, ShouldersSupported, WorkAcrossMidLine and CenterOfGravity.
	  **/
	virtual void Reset() = 0;

	/**
	  * @return The number of angle ranges for a specified body part.
	  *
	  * @param piBodyPart The body part for which the information is to be returned.
	  **/
	virtual unsigned GetNumberOfAngleRanges(const SWKEBodyPart & piBodyPart) = 0;

	/**
	  * Retrieve the angle range at the specified index.
	  *
	  * @param piBodyPart The concerned body part.
	  * This parameter can only take the following values:
	  * SWKEBodyPartUpperArm, SWKEBodyPartForearm, SWKEBodyPartWrist,
	  * SWKEBodyPartNeck and SWKEBodyPartTrunk.
	  *
	  * @param piIndex The index of the range to be read.
	  * @param poMinValue The lower limit of the angle range read.
	  * @param poMaxValue The upper limit of the angle range read.
	  * @param poScore  The score associated with the range.
	  *
	  * @return A status indicating whether the input parameters are valid or not.
	  **/
	virtual HRESULT GetAngleRangeAtIndex(const SWKEBodyPart & piBodyPart, unsigned piIndex,
										 double & poMinValue, double & poMaxValue,
										 unsigned & poScore) const = 0;

	/**
	  * @return The color of the RULA analysis.
	  */
	virtual unsigned GetColor(const SWKIRULASpecs::SWKRULAScores & piScore) const = 0;
	
	/**
	  * This function returns the color of the RULA analysis for a specific segment.
	  *
	  * @param piShortName The segment to find the color in the RULA analysis.
	  * @param piColoredValue To know if we are in General/Detailed mode.
	  * @return The color of the RULA analysis for the specific segment.
	  */
	virtual unsigned GetColor(const SWShortName & piShortname,
					  SWKERULATypeColoring piColoredValue) const = 0;

	/**
	  * @return <code><strong><font color="blue">true</font></strong></code>
	  * if the arm is abducted,
	  * <code><strong><font color="blue">false</font></strong></code> otherwise.
	  *
	  * The arm used depends on the current side of study.
	  **/
	virtual boolean IsArmAbducted() const = 0;

	/**
	  * @return <code><strong><font color="blue">true</font></strong></code>
	  * if the shoulder is raised,
	  * <code><strong><font color="blue">false</font></strong></code> otherwise.
	  *
	  * The shoulder used depends on the current side of study.
	  **/
	virtual boolean IsShoulderRaised() const = 0;

	/**
	  * @return <code><strong><font color="blue">true</font></strong></code>
	  * if the arm is out to the side of the body,
	  * <code><strong><font color="blue">false</font></strong></code> otherwise.
	  *
	  * The arm used depends on the current side of study.
	  **/
	virtual boolean IsArmOutToSide() const = 0;

	/**
	  * @return <code><strong><font color="blue">true</font></strong></code>
	  * if the wrist is bent,
	  * <code><strong><font color="blue">false</font></strong></code> otherwise.
	  *
	  * The wrist used depends on the current side of study.
	  **/
	virtual boolean IsWristBent() const = 0;

	/**
	  * @return <code><strong><font color="blue">true</font></strong></code>
	  * if the wrist is twisted,
	  * <code><strong><font color="blue">false</font></strong></code> otherwise.
	  *
	  * The wrist used depends on the current side of study.
	  **/
	virtual boolean IsWristTwisted() const = 0;

	/**
	  * @return <code><strong><font color="blue">true</font></strong></code>
	  * if the neck is twisted,
	  * <code><strong><font color="blue">false</font></strong></code> otherwise.
	  **/
	virtual boolean IsNeckTwisted() const = 0;

	/**
	  * @return <code><strong><font color="blue">true</font></strong></code>
	  * if the neck is side-bending,
	  * <code><strong><font color="blue">false</font></strong></code> otherwise.
	  **/
	virtual boolean IsNeckSideBending() const = 0;

	/**
	  * @return <code><strong><font color="blue">true</font></strong></code>
	  * if the trunk is twisted,
	  * <code><strong><font color="blue">false</font></strong></code> otherwise.
	  **/
	virtual boolean IsTrunkTwisted() const = 0;

	/**
	  * @return <code><strong><font color="blue">true</font></strong></code>
	  * if the trunk is side-bending,
	  * <code><strong><font color="blue">false</font></strong></code> otherwise.
	  **/
	virtual boolean IsTrunkSideBending() const = 0;

	/**
	  * @return <code><strong><font color="blue">true</font></strong></code>
	  * if piShortName is included in "Wrist And Arm" (Upperarm, Forearm, Wrist),
	  * <code><strong><font color="blue">false</font></strong></code> otherwise.
	  *
	  * @param piShortName The short name of the segment to check.
	  **/
	virtual boolean IsInWristAndArm(const SWShortName & piShortName) const = 0;

	/**
	  * @return <code><strong><font color="blue">true</font></strong></code>
	  * if piShortName is included in "Posture B" (Neck, Trunk, Leg),
	  * <code><strong><font color="blue">false</font></strong></code> otherwise.
	  *
	  * @param piShortName The short name of the segment to check.
	  **/
	virtual boolean IsInNeckTrunkAndLeg(const SWShortName & piShortName) const = 0;

	/**
	  * @return <code><strong><font color="blue">true</font></strong></code>
	  * if piShortName can be colored regarding the RULA Analysis,
	  * <code><strong><font color="blue">false</font></strong></code> otherwise.
	  *
	  * @param piShortName The short name of the segment to check.
	  **/
	virtual boolean IsInRULAColoring(const SWShortName & piShortName) const = 0;

	/**
	  * @return <code><strong><font color="blue">true</font></strong></code>
	  * if piShortName has the max score value for the RULA analysis,
	  * <code><strong><font color="blue">false</font></strong></code> otherwise.
	  *
	  * @param piShortName The short name of the segment to check.
	  * @param piResults Contains the results of the RULA analysis.
	  * @param piRULATypeColoring RULA type for coloring. If this is general, the function
	  *        should check score for "Wrist and Arm" or "Neck, Trunk and Leg".
	  **/
	virtual boolean HasMaxScore(const SWShortName & piShortName,
						const SWAnalysisResults & piResults,
						const SWKERULATypeColoring & piRULATypeColoring = SWKERULATypeColoringDetailed) const = 0;

	/**
	  *  Reserved for internal use.
	  **/
	virtual void * InternalSettings(void * piSettings = NULL) = 0;
};

CATDeclareHandler(SWKIRULASpecs, CATBaseUnknown);

#endif
