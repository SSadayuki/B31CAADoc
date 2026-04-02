// COPYRIGHT DASSAULT SYSTEMES 2003

#ifndef _SWKIDOF_h
#define _SWKIDOF_h

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
//    SWKIDOF interface.
//    This interface provides no-IDL DOF services.
//
// *****************************************************************************
//  Usage:
//  ------
//
// *****************************************************************************
//  Inheritance:
//  ------------
//
//    SWKIManikinPart
//
// *****************************************************************************
//  Main Methods:
//  -------------
//
//    GetOwner
//    GetManikin
//    IncrementValue
//    DecrementValue
//    GetValue
//    GetValueIntersSegment
//    GetRange
//    SetValue
//    SetValueInterSegment
//    SetCustomizedJointColor
//    GetCustomizedJointColor
//    Reset
//    GetDefaultValue
//    GetDefaultRange
//    GetNumber
//    IsInverted
//    GetScore
//    GetColor
//    GetMaxScore
//    SetToHighestScore
//    IsScoreDifferent
//    PrefAngsAreValid
//    LockValue
//    KeepLockStateForPasteFrom
//    GetDOFState
//    IsSpineDof
//    LockLimits
//    UnlockLimits
//    AreLimitsLocked
//    RemoveLimits
//    ResetAngularLimitations
//    SetEndSpineElement
//    GetEndSpineElement
//    GetMinLim
//    GetMinLimInterSegment
//    GetMinLimNoCoupling
//    GetMinLimAsPercentile
//    GetMaxLim
//    GetMaxLimInterSegment
//    GetMaxLimNoCoupling
//    GetMaxLimAsPercentile
//    SetMinLim
//    SetMinLimInterSegment
//    SetMinLimFromPercentile
//    SetMaxLim
//    SetMaxLimInterSegment
//    SetMaxLimFromPercentile
//    GetMinMean
//    GetMinMeanInterSegment
//    GetMinStdDev
//    GetMaxMean
//    GetMaxMeanInterSegment
//    GetMaxStdDev
//    GetName
//    GetMinName
//    GetMaxName
//    AddPrefAngle
//    InsertPrefAngleAfter
//    GetTotalNumberOfPrefAngles
//    GetNumberOfPrefAnglesInRange
//    GetPrefAngle
//    SetPrefAngleMin
//    SetPrefAngleMax
//    RemovePrefAngle
//    RemoveNullPrefAngles
//    RemoveAllPrefAngles
//    IsMasterCoupledDOF
//    IsSlaveCoupledDOF
//    SetSpeed
//    GetSpeed
//    SetAcceleration
//    GetAcceleration
//    SetInternalDOF
//    ReleaseAllPrefAnglesSubscriber
//    ReleaseAllPrefAnglesFather
//    SetLimitsToMatchBestPrefAngle
//    GetInterSegmentType
//    AdjustLimitForIntersegment
//    IsInsideHumanLimitation
// *****************************************************************************
//  History
//  -------
//
//  Author: Jean-Guy AUGUSTIN
//  Date  : 00/03/13
//  Goal  : Creation
// *****************************************************************************
//
// --- DNBHumanModelingInterfaces
#include "SWKEnums.h"
#include "SWKIBodyElement.h"
#include "SWKIManikinPart.h"
//
// --- System
#include "CATBooleanDef.h"
//
// --- DNBHumanModeling
class SWDOF;
//
// --- DNBHumanModelingInterfaces
class SWKIBodyElement;
class SWKIManikin;
class SWKIPrefAngle;
//
// --- Visualization
class CAT3DBagRep;

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
extern ExportedBySWKHumanModelingItf IID IID_SWKIDOF;
#else
extern "C" const IID IID_SWKIDOF;
#endif

// Ranges of motion for DOF values
#define SWK_DOF_RANGE_PLUS  +1
#define SWK_DOF_RANGE_MINUS -1

class ExportedBySWKHumanModelingItf SWKIDOF : public SWKIManikinPart
{
    CATDeclareInterface;

 public:

    /**
      * @return The segment or line of sight which owns this degree of
      * freedom.
      **/
    virtual SWKIBodyElement * GetOwner() const = 0;

    /**
      * @return The manikin which owns this degree of
      * freedom.
      **/
    virtual SWKIManikin * GetManikin() = 0;

    /**
      * Increment the DOF's value by the amount of radians given by the parameter.<br>
      * Default is 0.017453293 (1 degree).
      *
      * @return <code>S_OK</code> if the new value of the DOF
      * is still within the range, <code>S_FALSE</code> if the new value would have<br>
      * caused the DOF to go out of bounds. In that case, the current value remains.
      **/
    virtual HRESULT IncrementValue(double piAngleIncrement = 0.017453293,
                                   boolean piRefreshRep = TRUE) = 0;

    /**
      * Decrement the DOF's value by the amount of radians given by the parameter.<br>
      * Default is 0.017453293 (1 degree).
      *
      * @return <code>S_OK</code> if the new value of the DOF
      * is still within the range, <code>S_FALSE</code> if the new value would have<br>
      * caused the DOF to go out of bounds. In that case, the current value remains.
      **/
    virtual HRESULT DecrementValue(double piAngleIncrement = 0.017453293,
                                   boolean piRefreshRep = TRUE) = 0;

    /**
      * @return The current value of the DOF, in radians.<br>
      * <strong>This return value will always be positive</strong>.<br>
      * A call to <code>GetRange()</code> gives the sign of that value.
      **/
    virtual double GetValue() const = 0;

    /**
      * @return The current value of the dof bewteen two spine segments
      * <strong> Unlike the normal <code>GetValue()</code> function, the value returned by 
      * <code>GetValueInterSegment()</code> will be ready to for Customized Joint only.
      * the sign and the range are already applied. </strong>
      **/
    virtual double GetValueBetweenSegments(SWShortName piStartName, SWShortName piEndName) const = 0;

    /**
      * @return The current value of the dof bewteen two spine segments
      * <strong> Unlike the normal <code>GetValue()</code> function, the value returned by 
      * <code>GetValueInterSegment()</code> will be ready to for Customized Joint only.
      * the sign and the range are already applied. </strong>
      **/
    virtual void SetValueBetweenSegments(SWShortName piStartName, SWShortName piEndName, double piValue) = 0;

    /**
      * @return The current value of the dof in intersegment mode
      * <strong> Unlike the normal <code>GetValue()</code> function, the value returned by 
      * <code>GetValueInterSegment()</code> will be ready to use as is. the sign and the range are
      * already applied. </strong>
      **/
    virtual double GetValueInterSegment() const = 0;
    
    /**
      * @return The range of validity of the current value.<br>
      * This range represents the sense of motion (extension, flexion, abduction,...)<br>
      * Its value is either <code>SWK_DOF_RANGE_PLUS</code> or <code>SWK_DOF_RANGE_MINUS</code>.
      **/
    virtual int GetRange() const = 0;

    /**
      * Set the value of the DOF.<br>
      * <strong>This method always takes in a positive value</strong>.<br>
      * A negative value for a DOF must be expressed as a positive<br>
      * value as the first parameter, along with the flag <code>SWK_DOF_RANGE_MINUS</code>
      * for the second parameter (<code>piRange</code>).<br>
      *
      * @param piNewValueInRadians The absolute value of the DOF, in radians.
      *
      * @param piRange Specifies the range of validity and corresponds to the sense
      * of motion.<br>
      * <br>
      * The table below defines the range to adopt
      * (the value of the parameter <code>piRange</code>)<br>
      * for a few segments of the body and for each possible motion of those segments.<br>
      * <br>
      * <pre>
      * ============================================================
      * |   SEGMENT NAME    |    MOTION      |  piRange VALUE      |
      * ============================================================
      * |     Neck          |   Flexion      | SWK_DOF_RANGE_PLUS  |
      * |     Neck          |  Extension     | SWK_DOF_RANGE_MINUS |
      * |     Neck          | Lateral Left   | SWK_DOF_RANGE_PLUS  |
      * |     Neck          | Lateral Right  | SWK_DOF_RANGE_MINUS |
      * |     Neck          | Rotation Left  | SWK_DOF_RANGE_PLUS  |
      * |     Neck          | Rotation Right | SWK_DOF_RANGE_MINUS |
      * |========================================================= |
      * |    Vision         |      Top       | SWK_DOF_RANGE_PLUS  |
      * |    Vision         |     Botom      | SWK_DOF_RANGE_MINUS |
      * |    Vision         |  Lateral Left  | SWK_DOF_RANGE_PLUS  |
      * |    Vision         |  Lateral Right | SWK_DOF_RANGE_MINUS |
      * |========================================================= |
      * |     Thigh         |   Abduction    | SWK_DOF_RANGE_PLUS  |
      * |     Thigh         |   Adduction    | SWK_DOF_RANGE_MINUS |
      * |     Thigh         |   Flexion      | SWK_DOF_RANGE_PLUS  |
      * |     Thigh         |   Extension    | SWK_DOF_RANGE_MINUS |
      * |     Thigh         | Medial Rotation| SWK_DOF_RANGE_PLUS  |
      * |     Thigh         |Lateral Rotation| SWK_DOF_RANGE_MINUS |
      * |========================================================= |
      * |      Leg          |    Flexion     | SWK_DOF_RANGE_PLUS  |
      * |      Leg          |   Extension    | SWK_DOF_RANGE_MINUS |
      * |      Leg          |Medial Rotation | SWK_DOF_RANGE_PLUS  |
      * |      Leg          |Lateral Rotation| SWK_DOF_RANGE_MINUS |
      * |========================================================= |
      * |     Ankle         |  Dorsiflexion  | SWK_DOF_RANGE_PLUS  |
      * |     Ankle         | Plantar flexion| SWK_DOF_RANGE_MINUS |
      * |     Ankle         |  Inversion     | SWK_DOF_RANGE_PLUS  |
      * |     Ankle         |  Eversion      | SWK_DOF_RANGE_MINUS |
      * |========================================================= |
      * |     Toes          |    Flexion     | SWK_DOF_RANGE_PLUS  |
      * |     Toes          | Hyper-Extension| SWK_DOF_RANGE_MINUS |
      * |========================================================= |
      * |   Clavicular      |   Flexion      | SWK_DOF_RANGE_PLUS  |
      * |   Clavicular      |  Extension     | SWK_DOF_RANGE_MINUS |
      * |   Clavicular      |  Elevation     | SWK_DOF_RANGE_PLUS  |
      * |   Clavicular      |  Depression    | SWK_DOF_RANGE_MINUS |
      * |========================================================= |
      * |     Arm           |    Flexion     | SWK_DOF_RANGE_PLUS  |
      * |     Arm           |   Extension    | SWK_DOF_RANGE_MINUS |
      * |     Arm           |   Abduction    | SWK_DOF_RANGE_PLUS  |
      * |     Arm           |   Adduction    | SWK_DOF_RANGE_MINUS |
      * |     Arm           | Medial Rotation| SWK_DOF_RANGE_PLUS  |
      * |     Arm           |Lateral Rotation| SWK_DOF_RANGE_MINUS |
      * |========================================================= |
      * |    ForeArm        |    Flexion     | SWK_DOF_RANGE_PLUS  |
      * |    ForeArm        |   Extension    | SWK_DOF_RANGE_MINUS |
      * |    ForeArm        |   Pronation    | SWK_DOF_RANGE_PLUS  |
      * |    ForeArm        |   Supination   | SWK_DOF_RANGE_MINUS |
      * |========================================================= |
      * </pre>
      *
      * @return <code>S_OK</code> if the value could be set,
      * <code>S_FALSE</code> if the value is out of range.
      **/
    virtual HRESULT SetValue(double piNewValueInRadians, 
                             int piRange,
                             boolean piRefreshRep = FALSE) = 0;

    /**
      * This method is used to set the current value of the DOF when in Inter-Segment
      * mode. This method should only be used after checking that Inter-Segment is on.
      * Using it in default mode will set wrong values.
      * @param piNewValueInRadians The new value in radians
      * @param piRange Specifies the range of validity and corresponds to the sense
      * of motion.
      * @param piRefreshRep determines if the rep should be refreshed.
      **/
    virtual HRESULT SetValueInterSegment(double piNewValueInRadians,
                             int piRange,
                             boolean piRefreshRep = TRUE) = 0;

    /**
      * Set the end element of Spine DOF.
      **/
    virtual HRESULT SetEndSpineElement(SWShortName piEndElementShortName) = 0; 

    /**
      * Get the short name end element of Spine DOF.
      **/
    virtual SWShortName GetEndSpineElement() = 0; 

    /**
      * Set the DOF back to its default value.
      **/
    virtual void Reset(boolean piRefreshRep = TRUE) = 0;

    /**
      * @return The default value of the DOF, that is, the value of the DOF when<br>
      * the manikin is in its default (standing) posisition.<br>
      * <strong>This return value will always be positive</strong>.<br>
      * A call to <code>GetDefaultRange()</code> gives the sign of that value.
      **/
    virtual double GetDefaultValue() const = 0;

    /**
      * @return The range of validity of the default value.<br>
      * This range represents the sense of motion (extension, flexion, abduction,...)<br>
      * Its value is either <code>SWK_DOF_RANGE_PLUS</code> or <code>SWK_DOF_RANGE_MINUS</code>.
      **/
    virtual int GetDefaultRange() const = 0;

    /**
      * @return The number of this DOF.
      * Each DOF on a given segment is numbered from 0 to 2.<br>
      * The return value is thus between 0 and 2.
      **/
    virtual unsigned GetNumber() const = 0;
    virtual HRESULT GetNumber(SWKEDOF & poDOFId) const = 0;

    /**
      * @return <code><font color="blue"><strong>TRUE</strong></font></code>
      * if the DOF is inverted (e&#x2e;gi&#x2e; knee's flexion),
      * <code><font color="blue"><strong>FALSE</strong></font></code> otherwise.
      **/
    virtual boolean IsInverted() const = 0;

    /**
      * @return The score corresponding to the DOF's current value.<br>
      * The score returned is the one defined with the preferred
      * angles of this DOF.<br>
      * If no preferred angles have been defined for the current DOF,
      * the method returns <code>0</code>.
      **/
    virtual double GetScore() const = 0;

    /**
      * @return the preferred angle color corresponding to the DOF's current value.
      **/
    virtual int GetColor() const = 0;

    /**
      * Set the color of DOF to as user defined customized joint for coloring
      **/
    virtual void SetCustomizedJointColor(const SWShortName piStart, const SWShortName piEnd) = 0;

    /**
      * @return The color of the customuzed joint on this DOF.<br>
      * Get the color of DOF to as user defined customized joint for coloring.
      *
      * Also put the short name of the start segment and that of the end segment
      * into poStart and poEnd
      **/
    virtual int GetCustomizedJointColor(SWShortName * poStart = NULL, SWShortName * poEnd = NULL) = 0;

    /**
      * @return The color of the worst score customized joint on this DOF.<br>
      * Get the color of DOF to as user defined customized joint with worst postural score.
      **/
    virtual int  GetCustomizedJointColorOfWorstScore() = 0;

    /**
      * @return The highest score that this DOF can take.<br>
      * The scores in question are looked up in the preferred angle
      * table defined on the DOF.
      **/
    virtual double GetMaxScore() const = 0;

    /**
      * Set the DOF's value so its score is the highest possible.<br>
      * The scores in question are looked up in the preferred angle
      * table defined on the DOF.
      **/
    virtual void SetToHighestScore() = 0;

    /**
      * @return <code>TRUE</code> if at least one score is different 
      * from the other(s) score(s).<br>
      * The scores verified are the ones defined with the preferred
      * angles of this DOF.<br>
      * If all preferred angles have been defined with the same score value,
      * the method returns <code>FALSE</code>
      **/
    virtual boolean IsScoreDifferent() = 0;

    /**
      * @return <code>TRUE</code> if IsScoreDifferent() is TRUE,  
      * the GetMaxScore() is greater than 0 and GetTotalNumberOfPrefAngles()
      * is greater than 1.
      **/
    virtual boolean PrefAngsAreValid() = 0;

    /**
      * Lock the value so that it cannot be changed by the application.
      **/
    virtual void LockValue() = 0;

    /**
      * @param piKeep The PasteFrom function will never changes the state of the
      * lock if the piKeep value is TRUE.
      **/
    virtual void KeepLockStateForPasteFrom(boolean piKeep) = 0;

    /**
      * @return the state of the DOF to know if it is locked or
      * if the angular limitations have been removed or none of them
      **/
    virtual SWKEDOFState GetDOFState() const = 0;

    /**
      * Lock the upper and lower limits so that they cannot
      * be changed by the application.
      **/
    virtual void LockLimits() = 0;

    /**
      * Unlock the upper and lower limits so that they can
      * be changed by the application.
      **/
    virtual void UnlockLimits() = 0;

    /**
      * @return <code><font color="blue"><strong>TRUE</strong></font></code> if the limits are locked.
      **/
    virtual boolean AreLimitsLocked() const = 0;

    /**
      * Removes the angular limitations
      **/
    virtual void RemoveLimits() = 0;

    /**
      * Resets the angular limitations depending on the param piReset
      * SWKEResetDefault  -> SWKEResetLock OR SWKEResetNoLimits OR SWKEResetLimits
      *                      depending of the first encountered.
      * SWKEResetAll      -> SWKEResetLock AND SWKEResetNoLimits AND SWKEResetLimits
      * SWKEResetLock     -> Unlock the value
      * SWKEResetNoLimits -> Restore the angular limitations
      * SWKEResetLimits   -> Set back the angular limitations to 50.0%
      **/
    virtual void ResetAngularLimitations(SWKEReset piReset = SWKEResetDefault) = 0;

    /**
      * @return <code><font color="blue"><strong>TRUE</strong></font></code>
      * if It is spine dof.
      **/
    virtual boolean IsSpineDof() = 0;

    /**
      * @return The lowest value (in radians) that can be taken by this DOF.<br>
      * <strong>The value returned must be multiplied by -1.0 to get
      * the real minimum.</strong><br>
      * For instance, if the method returns the value <code>2.0</code>, the real<br>
      * minimum is <code>-2.0</code> radians.
      *
      * @param piCheckLock Specify if we want to consider the lock on the segment
      *                    to return the value (return the value of the DOF if it is locked).
      **/
    virtual double GetMinLim(boolean piCheckLock = FALSE) const = 0;

    /**
      *    @return The lowest value (in radians) that can be taken by this DOF
      * in Intersegment mode. The value must be multiplied by -1 to get the real minimum.
      * 
      */
    virtual double GetMinLimInterSegment() const = 0;

    /**
      * @return The lowest value (in radians) that can be taken by this DOF<br>
      * when the coupling is disabled.<br>
      * <strong>The value returned must be multiplied by -1.0 to get
      * the real minimum.</strong><br>
      * For instance, if the method returns the value <code>2.0</code>, the real<br>
      * minimum is <code>-2.0</code> radians.
      **/
    virtual double GetMinLimNoCoupling(boolean piNormalValue = FALSE) const = 0;

    /**
      * @return The lowest value that can be taken by this DOF,
      * but in a percentile format<br> (i.e. from 0 to 100 inclusive).
      **/
    virtual double GetMinLimAsPercentile() const = 0;

    /**
      * @return The highest value (in radians) that can be taken by this DOF.
      *
      * @param piCheckLock Specify if we want to consider the lock on the segment
      *                    to return the value (return the value of the DOF if it is locked).
      **/
    virtual double GetMaxLim(boolean piCheckLock = FALSE) const = 0;

    /**
      *    @return The highest value (in radians) that can be taken by this DOF
      * in Intersegment mode
      */
    virtual double GetMaxLimInterSegment() const = 0;

    /**
      * @return The highest value (in radians) that can be taken by this DOF
      * when the coupling is disabled.
      **/
    virtual double GetMaxLimNoCoupling(boolean piNormalValue = FALSE) const = 0;

    /**
      * @return The highest value that can be taken by this DOF,
      * but in a percentile format (i.e. from 0 to 100 inclusive).
      **/
    virtual double GetMaxLimAsPercentile() const = 0;

    /**
      * Set the lower limit of the DOF's mobility.
      *
      * @param piLim The lower limit value (in radians).
      *
      * @param piLimitToValidPerc Boolean to keep the lower limit inside the
      * percentile lower limit.
      *
      * @param piRefreshRep Indicates whether or not the 3D representation
      * should be refreshed.
      *
      * @return <code>S_OK</code> on success, or <code>E_INVALIDARG</code> if the<br>
      * value given in the parameter goes beyond the DOF's minimum mobility.
      **/
    virtual HRESULT SetMinLim(double piLim, boolean piLimitToValidPerc = TRUE,
                                boolean piRefreshRep = TRUE) = 0;

    /**
      * Sets the value of the lower DOF limit in intersegment mode. This function should be used 
      * only after verifying that the Inter-Segment option is on. It will modify the values
      * internally to assign the lower limit of the DOF correctly.
      * @param piLim the value of the limit.
      * @param piLimitToValidPerc Boolean to keep the lower limit inside the
      * percentile lower limit.
      * @param piRefreshRep Indicates whether or not the 3D representation
      * should be refreshed.
      */
    virtual HRESULT SetMinLimInterSegment(double piLim, boolean piLimitToValidPerc = TRUE,
                        boolean piRefreshRep = TRUE) = 0 ;
    /**
      * Set the lower limit of the DOF's mobility as a percentile value,<br>
      * that is, between 0 and 100 inclusive.
      *
      * @param piLim The lower limit value (in percentile format).
      *
      * @param piRefreshRep Indicates whether or not the 3D representation
      * should be refreshed.
      *
      * @return <code>S_OK</code> on success, or <code>E_INVALIDARG</code> if the<br>
      * value given in the parameter does not lie within the range [0.0, 100.0].
      **/
    virtual HRESULT SetMinLimFromPercentile(double piLim, boolean piRefreshRep = TRUE) = 0;

    /**
      * Set the higher limit of the DOF's mobility.
      *
      * @param piLim The higher limit value (in radians).
      *
      * @param piLimitToValidPerc Boolean to keep the upper limit inside the
      * percentile upper limit.
      *
      * @param piRefreshRep Indicates whether or not the 3D representation
      * should be refreshed.
      *
      * @return <code>S_OK</code> on success, or <code>E_INVALIDARG</code> if the<br>
      * value given in the parameter goes beyond the DOF's maximum mobility.
      **/
    virtual HRESULT SetMaxLim(double piLim, boolean piLimitToValidPerc = TRUE,
                                boolean piRefreshRep = TRUE) = 0;

    /**
      * Sets the value of the upper DOF limit in intersegment mode. This function should be used 
      * only after verifying that the Inter-Segment option is on. It will modify the values
      * internally to assign the upper limit of the DOF correctly.
      * @param piLim the value of the limit.
      * @param piLimitToValidPerc Boolean to keep the lower limit inside the
      * percentile upper limit.
      * @param piRefreshRep Indicates whether or not the 3D representation
      * should be refreshed.
      */
    virtual HRESULT SetMaxLimInterSegment(double piLim, boolean piLimitToValidPerc = TRUE,
                                boolean piRefreshRep = TRUE) = 0;

    /**
      * Set the higher limit of the DOF's mobility as a percentile value,<br>
      * that is, between 0 and 100 inclusive.
      *
      * @param piLim The higher limit value (in percentile format).
      *
      * @param piRefreshRep Indicates whether or not the 3D representation
      * should be refreshed.
      *
      * @return <code>S_OK</code> on success, or <code>E_INVALIDARG</code> if the<br>
      * value given in the parameter does not lie within the range [0.0, 100.0].
      **/
    virtual HRESULT SetMaxLimFromPercentile(double piLim, boolean piRefreshRep = TRUE) = 0;

    /**
      * @return The mean value of the DOF's lower limit.
      **/
    virtual double GetMinMean() const = 0;
    
    /**
      * @return The mean value of the DOF's lower limit in Intersegment mode
      **/
    virtual double GetMinMeanInterSegment() const = 0;

    /**
      * @return The standard deviation value of the DOF's lower limit.
      **/
    virtual double GetMinStdDev() const = 0;

    /**
      * @return The mean value of the DOF's upper limit.
      **/
    virtual double GetMaxMean() const = 0;

    /**
      * @return The mean value of the DOF's upper limit in Intersegment mode
      **/
    virtual double GetMaxMeanInterSegment() const = 0;

    /**
      * @return The standard deviation value of the DOF's upper limit.
      **/
    virtual double GetMaxStdDev() const = 0;

    /**
      * @return The name corresponding to the DOF's current position.
      **/
    virtual CATUnicodeString GetName() const = 0;

    /**
      * @return The name corresponding to the minimum sense of motion.
      **/
    virtual CATUnicodeString GetMinName() const = 0;

    /**
      * @return The name corresponding to the maximum sense of motion.
      **/
    virtual CATUnicodeString GetMaxName() const = 0;


    /**
      * Add a preferred angle at the end of the list.
      **/
    virtual void AddPrefAngle() = 0;

    /**
      * Insert a preferred angle in the list at the specified index.
      *
      * @param piIndex The position of the preferred angle after which the new<br>
      * one must be inserted.  First preferred angle is at index 0.
      * @param piScore The score that will be given to the new preferred angle.<br>
      * <br>
      * The preferred angle will be inserted at the specified index in the list,<br>
      * and its length will be null (i.e. its min. value will be equal to its<br>
      * max. value).  The application can then use methods <code>SetPrefAngleMin()</code><br>
      * and <code>SetPrefAngleMax()</code> to set the new pref. angle (the one returned)<br>
      * to other values.
      *
      * @return The new pref. angle created and inserted, or <code>NULL</code><br>
      * if the index is out of bounds or another error occurred.
      **/
    virtual SWKIPrefAngle * InsertPrefAngleAfter(unsigned piIndex, double piScore = 0.0) = 0;

    /**
      * @return The total number of preferred angles that have been
      * created on this DOF.
      **/
    virtual unsigned GetTotalNumberOfPrefAngles() const = 0;

    /**
      * @return The number of preferred angles which lie within
      * the DOF's range.
      **/
    virtual unsigned GetNumberOfPrefAnglesInRange() const = 0;

    /**
      * Retrieve a preferred angle by its name.
      *
      * @param piPrefAngleName The (user-defined) name of the preferred angle
      * to return.
      *
      * @return The preferred angle with the desired name, or <code>NULL</code>
      * if no preferred angle with such a name exists.
      **/
    virtual SWKIPrefAngle * GetPrefAngle(const CATUnicodeString & piPrefAngleName) const = 0;

    /**
      * Retrieve a preferred angle by its index.
      *
      * @param piPrefAngleIndex The index of the preferred angle to
      * return. First pref. angle is at index <code>0</code>.
      *
      * @return The desired preferred angle, or <code>NULL</code>,
      * if the index goes out of bounds.
      **/
    virtual SWKIPrefAngle * GetPrefAngle(unsigned piPrefAngleIndex) const = 0;

    /**
      * Set the minimum value of the chosen preferred angle.
      *
      * @param piPrefAngleIndex The index of the preferred angle whose  min
      * value is to be modified.
      *
      * @param piValue The new min value (in radians).
      *
      * @return <code>S_OK</code> on success, or <code>E_INVALIDARG</code>
      * if the index goes out of bounds.
      **/
    virtual HRESULT SetPrefAngleMin(unsigned piPrefAngleIndex, double piValue) = 0;

    /**
      * Set the maximum value of the chosen preferred angle.
      *
      * @param piPrefAngleIndex The index of the preferred angle whose  max
      * value is to be modified.
      *
      * @param piValue The new max value (in radians).
      *
      * @return <code>S_OK</code> on success, or <code>E_INVALIDARG</code>
      * if the index goes out of bounds.
      **/
    virtual HRESULT SetPrefAngleMax(unsigned piPrefAngleIndex, double piValue) = 0;

    /**
      * Remove the preferred angle at the specified index.
      *
      * @param piIndex The index of the preferred angle to remove.
      * @return The number of preferred angles after removal.
      **/
    virtual unsigned RemovePrefAngle(unsigned piIndex) = 0;

    /**
      * Remove all preferred angles for which min = max.
      * @return The number of preferred angles after removal.
      **/
    virtual unsigned RemoveNullPrefAngles() = 0;

    /**
      * Remove all preferred angles on this DOF.
      **/
    virtual void RemoveAllPrefAngles() = 0;

    /**
      * Synchronize the list of preferred angles.
      * This method is used to update the current list of
      * preferred angles when a paste, a mirror copy or a
      * swap is performed by the user.  The synchronisation
      * is done automatically internally so this method need
      * not be called by the application.
      **/
    virtual void SynchronizePrefAngles() = 0;

    /**
      * @return <code><font color="blue"><strong>TRUE</strong></font></code>
      * if this DOF is the coupling master of another.
      **/
    virtual boolean IsMasterCoupledDOF() const = 0;

    /**
      * @return <code><font color="blue"><strong>TRUE</strong></font></code>
      * if this DOF is the coupling slave of another.
      **/
    virtual boolean IsSlaveCoupledDOF() const = 0;

    /**
      * Set the speed of the DOF.
      *
      * @param piSpeed The new DOF speed.  This value is
      * entirely managed by the application that takes advantage of it.<br>
      * No verification whatsoever is performed on the value.
      *
      * @return <code>S_OK</code> on success, or <code>E_FAIL</code> on failure.
      **/
    virtual HRESULT SetSpeed(double piSpeed) = 0;

    /**
      * @return The value of the DOF speed.
      **/
    virtual double GetSpeed() const = 0;

    /**
      * Set the acceleration of the DOF.
      *
      * @param piAcceleration The new DOF acceleration.  This value is
      * entirely managed by the application that takes advantage of it.<br>
      * No verification whatsoever is performed on the value.
      *
      * @return <code>S_OK</code> on success, or <code>E_FAIL</code> on failure.
      **/
    virtual HRESULT SetAcceleration(double piAcceleration) = 0;

    /**
      * @return The value of the DOF acceleration.
      **/
    virtual double GetAcceleration() const = 0;

    /**
      * Initialize the internal DOF.
      * <strong>This method is to be used by the system only</strong>.
      **/
    virtual HRESULT SetInternalDOF(SWDOF * piInternalDOF) = 0;

    /**
      * Set the external subscriber of each pref angle to NULL.
      **/
    virtual void ReleaseAllPrefAnglesSubscriber() = 0;

    /**
      * Set the father of each pref angle to NULL.
      **/
    virtual void ReleaseAllPrefAnglesFather() = 0;

    /**
      * Set the angular limitations to match with the best pref angle.
      * The purpose of this method is to set the angular limitations of
      * this DOF so that these limitations correspond to the best range
      * of motion, that is, the range of motion where the postural score
      * is the highest.<br>
      * <br>
      * This method travels the different preferred angles on the DOF,
      * then chooses the one with the highest score.  If several
      * preferred angles are found with the highest score, then
      * the last one with the highest score is taken.<br>
      * <br>
      * If no preferred angles have been defined on this DOF, then
      * the angular limitations are not modified.
      *
      * @return A status code indicating success or failure.
      **/
    virtual HRESULT SetLimitsToMatchBestPrefAngle() = 0;

    enum SWKInterSegmentType
    {
        SWKISNone = 0,
        SWKIS180Offset = 1,
        SWKIS90Offset = 2,
        SWKIS180InvertedOffset = 3
    };

    /**
      * Returns the value of the intersegment type.
      * SWKISNone == non-applicable
      * SWKIS180Offset == applicable, 180 degrees offset. (most segments)
      * SWKIS90Offset == applicable, 90 degrees offset (feet)
      * SWKIS180InvertedOffset == applicable, inverted 180 degrees, (Center of prehension)
      * <strong>All values taken from a DOF will be in default mode
      * All value set to a DOF must be in default mode</strong>
      **/
    virtual SWKIDOF::SWKInterSegmentType GetInterSegmentType() = 0;

    /**
      * Adjust the value of the limit (pioLim) according to the Inter-Segment mode.
      * @param pioLim the value of the DOF's limit (inferior or superior)
      * @param piFromPrefAngle TRUE if we need the DOF Limits for the preferred angles.
      **/
    virtual void AdjustLimitForInterSegment(double & piLim, boolean piFromPrefAngle = FALSE) = 0;
    
    /**
      * @return TRUE if the segment is inside human limitations,
      *         FALSE otherwise
      **/
    virtual boolean IsInsideHumanLimitation() = 0;
};

CATDeclareHandler(SWKIDOF, SWKIManikinPart);

#endif
