// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef SWKEnums_h
#define SWKEnums_h

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

// *****************************************************************************
// Framework DNBHumanModeling
// Copyright Safework Inc.
// *****************************************************************************
//  Abstract:
//  ---------
//
//    Contains the global enums used in our interfaces
//
// *****************************************************************************
//  Usage:
//  ------
//
// *****************************************************************************
//  Inheritance:
//  ------------
//
// *****************************************************************************
//  Main Methods:
//  -------------
//
// *****************************************************************************
//  History
//  -------
//
//  Author: Julie GUEVREMONT
//  Date  : 04/03/19
//  Goal  : Creation
// *****************************************************************************

enum SWKESide
{
    SWKESideLeft = 0,
    SWKESideRight = 1,
    SWKESideNeutral = 2,
    SWKESideCurrent = 3
};

// --- IK Behaviors
#define SWK_IKBEHAVIOR_LIMBONLY            0000001  // IK resolve in local limb system only
#define SWK_IKBEHAVIOR_SPINETHORACIC       0000002  // IK resolve with horacic part of spine
#define SWK_IKBEHAVIOR_SPINELUMBAR         0000004  // IK resolve with lumbar part of spine
#define SWK_IKBEHAVIOR_PELVISTRANSH        0000010  // IK resolve with horizontal pelvic movement (root) if needed
#define SWK_IKBEHAVIOR_PELVISTRANSV        0000020  // IK resolve with vertical pelvic movement (root) if needed
#define SWK_IKBEHAVIOR_PELVISROT           0000040  // IK resolve will inlcude pelvic rotation if needed
#define SWK_IKBEHAVIOR_PELVISORI           0000100  // IK resolve will inlcude pelvic orientation if needed
#define SWK_IKBEHAVIOR_BALANCE             0000200  // IK resolve will keep manikin balance if need
#define SWK_IKBEHAVIOR_BALANCE_FEET        0000200  // IK resolve will keep manikin balance by moveing feet
#define SWK_IKBEHAVIOR_BALANCE_PELVIC      0000400  // IK resolve will keep manikin balance by moving pelvic
#define SWK_IKBEHAVIOR_KEEP_EYES           0001000  // IK resolve without line of sight movement
#define SWK_IKBEHAVIOR_KEEP_HEAD           0002000  // IK resolve without head movement

#define SWK_IKBEHAVIOR_POSTURALSCORE       0010000  // IK resolve with optimation of postural score
#define SWK_IKBEHAVIOR_RULA                0020000  // IK resolve with optimazition of RULA

#define SWK_IKBEHAVIOR_LOOKAT_ACTIVE_HAND  0100000  // IK resolve with the head and line of sight following the active hand
#define SWK_IKBEHAVIOR_LOOKAT_RIGHT_HAND   0200000  // IK resolve with the head and line of sight following the right hand
#define SWK_IKBEHAVIOR_LOOKAT_LEFT_HAND    0400000  // IK resolve with the head and line of sight following the left hand

// --- Enums used for the Reports 
enum SWKEReportFileTypes
{
    SWKEReportFileTypesNone = 0,
    SWKEReportFileTypesText = 1,
    SWKEReportFileTypesHtml = 2,
    SWKEReportFileTypesXml  = 3
};

enum SWKEReportTypes
{
    SWKEReportTypesAll = -1,
    SWKEReportTypesNone = 0,
    SWKEReportTypesPushPull = 1,
    SWKEReportTypesCarry = 2,
    SWKEReportTypesRULA = 3,
    SWKEReportTypesRULADetails = 4,
    SWKEReportTypesBiomechSummary = 5,
    SWKEReportTypesBiomechSpine = 6,
    SWKEReportTypesBiomechJoint = 7,
    SWKEReportTypesBiomechReaction = 8,
    SWKEReportTypesBiomechSeg = 9,
    SWKEReportTypesPosturalScore = 10,
    SWKEReportTypesPosturalScoreDAllDOFs = 11,
    SWKEReportTypesPosturalScoreDDOF1 = 12,
    SWKEReportTypesPosturalScoreDDOF2 = 13,
    SWKEReportTypesPosturalScoreDDOF3 = 14,
    SWKEReportTypesConstraints = 15,
    SWKEReportTypesVision = 16,
    SWKEReportTypesWalkDistanceEach = 17,
    SWKEReportTypesWalkDistanceCumulative = 18,
    SWKEReportTypesBalanceCheck = 19,
    SWKEReportTypesCenterOfGravity = 20,
    SWKEReportTypesNb = 21
};

// --- Enums used for the DOFs
#define GET_DOF_RANGE(v) ((v) < 0.0 ? SWK_DOF_RANGE_MINUS : SWK_DOF_RANGE_PLUS)

// Ranges of motion for DOF values
#define SWK_DOF_RANGE_PLUS  +1
#define SWK_DOF_RANGE_MINUS -1

enum SWKEDOFState
{
    SWKEDOFStateStandard = 0,
    SWKEDOFStateLocked   = 1,
    SWKEDOFStateNoLimits  = 2
};

enum SWKEReset
{
    SWKEResetDefault  = 0,
    SWKEResetAll      = 1,
    SWKEResetLock     = 2,
    SWKEResetNoLimits = 3,
    SWKEResetLimits   = 4
};

enum SWKEDOF
{
    SWKEDOF1   = 0,
    SWKEDOF2   = 1,
    SWKEDOF3   = 2,
    SWKEDOFAll = 3,
    SWKEDOFDet = 4
};

// --- Enums used for the coloring (RULA or PosturalScore)
enum SWKEAnalysisType
{
    SWKEAnalysisTypePosturalScore = 1,
    SWKEAnalysisTypeRULA = 2
};

enum SWKERULATypeColoring
{
    SWKERULATypeColoringGeneral = 0,
    SWKERULATypeColoringDetailed = 1
};

enum SWKEShowColors
{
    SWKEShowColorsNone = 0,
    SWKEShowColorsAll = 1,
    SWKEShowColorsAllButMaxScore = 2
};

enum SWKEObjectToColor
{
    SWKEObjectToColorSegOnly = 0,
    SWKEObjectToColorSurfacesOnly = 1,
    SWKEObjectToColorSegAndSurfaces = 2
};

enum SWKEPosturalScoreDOF
{
    SWKEPosturalScoreDOF1 = 0,
    SWKEPosturalScoreDOF2 = 1,
    SWKEPosturalScoreDOF3 = 2,
    SWKEPosturalScoreDOFWorst = 3
};

// --- Enums used for the SWKIRULASpecs
enum SWKEBodyPart
{
    SWKEBodyPartHand     = 0,
    SWKEBodyPartForearm  = 1,
    SWKEBodyPartUpperArm = 2,
    SWKEBodyPartHead     = 3,
    SWKEBodyPartNeck     = 4,
    SWKEBodyPartTrunk    = 5,
    SWKEBodyPartUpperLeg = 6,
    SWKEBodyPartLowerLeg = 7,
    SWKEBodyPartFoot     = 8,
    SWKEBodyPartWrist    = 9
};

enum SWKERULAAttr
{
    /**
      * This attribute gives the threshold value of the shoulder elevation.
      * The value of this attribute must be a double.
      * If the value of DOF1 of the clavicular is greater or equal to the
      * value given to this attribute, then the question "Is shoulder raised ?"
      * will have "Yes" as an answer.
      * Particular case: 
      *    - If the user invokes method
      *      SWRULASpecs::SetSpec(ShoulderElevation, SWRULASpecs::Yes),
      *      then the question above will always have "Yes" as an answer,
      *      regardless of the threshold value provided.
      *
      *    - If the user invokes method
      *      SWRULASpecs::SetSpec(ShoulderElevation, SWRULASpecs::No),
      *      then the question above will always have "No" as an answer,
      *      regardless of the threshold value provided. 
      *
      * To force the double value to be taken into account, the call 
      * SWRULASpecs::SetSpec(ShoulderElevation, SWRULASpecs::Automatic) 
      * must be made.  This mode is the default mode, which means that 
      * the threshold value provided will be taken into account by default. 
      **/
    SWKERULAAttrShoulderElevation = 0,

    /**
      * This attribute gives the threshold value of the upper arm abduction.
      * The value of this attribute must be a double.
      * If the value of DOF1 of the upper arm is greater or equal to the
      * value given to this attribute, then the question "Is arm abducted ?"
      * will have "Yes" as an answer.
      * The particular case explained above for parameter ShoulderElevation
      * also applies to this parameter. 
      **/
    SWKERULAAttrArmAbduction = 1,

    /** 
      * This attribute informs whether the shoulders are supported or not.
      * The value given to this attribute must be either SWRulaSpecs::Yes
      * or SWRulaSpecs::No.
      * The question "Shoulders supported ?" will have the value of
      * this attribute as an answer. 
      **/
    SWKERULAAttrShouldersSupported = 2,

    /**
      * This attribute informs whether the arms are working across the.
      * midline of the body.
      * The value given to this attribute must be either SWRulaSpecs::Yes
      * or SWRulaSpecs::No.
      * The question "Is arm working across midline of body ?" will have the value of
      * this attribute as an answer. 
      **/
    SWKERULAAttrWorkAcrossMidLine = 3,

    /**
      * This attribute gives the threshold value of the wrist deviation.
      * The value of this attribute must be a double.
      * If the value of DOF1 of the center of prehension is greater or equal to the
      * value given to this attribute, then the question
      * "Is wrist bent from the midline ?"
      * will have "Yes" as an answer.
      * The particular case explained above for parameter ShoulderElevation
      * also applies to this parameter. 
      **/
    SWKERULAAttrWristDeviation = 4,

    /**
      * This attribute gives the threshold value of the wrist twist.
      * The value of this attribute must be a double.
      * If the value of DOF2 of the forearm is greater or equal to the
      * value given to this attribute, then the question
      * "Is wrist near the end of twisting range ?"
      * will have "Yes" as an answer.
      * The particular case explained above for parameter ShoulderElevation
      * also applies to this parameter. 
      **/
    SWKERULAAttrWristTwist = 5,

    /**
      * This attribute gives the threshold value of the arm rotation.
      * The value of this attribute must be a double.
      * If the value of DOF2 of the arm is greater or equal to the
      * value given to this attribute, then the question
      * "Is arm out to the side of the body ?"
      * will have "Yes" as an answer.
      * The particular case explained above for parameter ShoulderElevation
      * also applies to this parameter. 
      **/
    SWKERULAAttrArmRotation = 6,

    /**
      * This attribute informs whether the posture of the subject is
      * either static or active throughout the work cycle.
      * Being static means that the posture of the subject is held
      * for longer than 1ten minutes.
      * Being active means that the subject performs some repeated action
      * more than four times per minute.
      * The value given to this attribute must be either SWRulaSpecs::Yes
      * or SWRulaSpecs::No.
      * The question "Posture mainly static or active ?" will have the value of
      * this attribute as an answer. 
      **/
    SWKERULAAttrPostureStaticOrActive = 7,

    /**
      * This attribute gives the value of the load which has to be carried.
      * The value of this attribute must be a double, and is always expressed
      * in kilograms. 
      **/
    SWKERULAAttrLoadInKg = 8,

    /**
      * This attribute is set to describe the load work. Its possible
      * values are SWRULASpecs::WorkStatic, SWRULASpecs::WorkIntermittent
      * or SWRULASpecs::WorkRepeated. 
      **/
    SWKERULAAttrLoadWorkQuality = 9,

    /**
      * This attribute gives the threshold value of the neck twist.
      * The value of this attribute must be a double.
      * If the value of DOF2 of segment SWSHeNe is greater or equal to the
      * value given to this attribute, then the question "Is neck twisted ?"
      * will have "Yes" as an answer.
      * The particular case explained above for parameter ShoulderElevation
      * also applies to this parameter. 
      **/
    SWKERULAAttrNeckTwist = 10,

    /**
      * This attribute gives the threshold value of the neck side-bending.
      * The value of this attribute must be a double.
      * If the value of DOF1 of segment SWSHeNe is greater or equal to the
      * value given to this attribute, then the question "Is neck side-bending ?"
      * will have "Yes" as an answer.
      * The particular case explained above for parameter ShoulderElevation
      * also applies to this parameter. 
      **/
    SWKERULAAttrNeckSideBend = 11,

    /** 
      * This attribute gives the threshold value of the trunk twist.
      * The value of this attribute must be a double.
      * If the value of DOF2 of segment SWSBoL5 is greater or equal to the
      * value given to this attribute, then the question "Is trunk twisted ?"
      * will have "Yes" as an answer.
      * The particular case explained above for parameter ShoulderElevation
      * also applies to this parameter. 
      **/
    SWKERULAAttrTrunkTwist = 12,

    /**
      * This attribute gives the threshold value of the trunk side-bending.
      * The value of this attribute must be a double.
      * If the value of DOF1 of segment SWSBoL5 is greater or equal to the
      * value given to this attribute, then the question "Is trunk side-bending ?"
      * will have "Yes" as an answer.
      * The particular case explained above for parameter ShoulderElevation
      * also applies to this parameter. 
      **/
    SWKERULAAttrTrunkSideBend = 13,

    /** 
      * This attribute specified which side of the manikin must be used
      * to perform the RULA study.
      * The possible values are SWRULASpecs::LeftSide and SWRULASpecs::RightSide.
      * The segments whose DOF values will be used with the RULA angle
      * specifications, depend on the value of this attribute. 
      **/
    SWKERULAAttrSideOfStudy = 14,

    /** 
      * This attribute informs whether or not to take the center of
      * The value given to this attribute must be either SWRulaSpecs::Yes
      * or SWRulaSpecs::No.
      * If the value is SWRulaSpecs::Yes,  then the manikin's balance
      * will be checked, and this will have an influcence on the calculation
      * of the final leg score. 
      **/
    SWKERULAAttrCenterOfGravity = 15
};

enum SWKERULAValue
{
    SWKERULAValueNo = 0,
    SWKERULAValueYes = 1,

    SWKERULAValueWorkStatic = 2,
    SWKERULAValueWorkIntermittent = 3,
    SWKERULAValueWorkRepeated = 4,

    SWKERULAValueLeftSide = 5,
    SWKERULAValueRightSide = 6,

    SWKERULAValueAutomatic = 7
};

#endif
