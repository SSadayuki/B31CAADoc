/* -*-c++-*- */
#ifndef CATIGSMHelix_H
#define CATIGSMHelix_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"
#include "CATICkeParm.h"
#include "CATGSMBasicLawDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMHelix;
#else
extern "C" const IID IID_CATIGSMHelix;
#endif
/**
 * Interface to helix feature.
 * <b>Role</b>: Allows you to access data of the Helix feature created by using 
 * an axis, a starting point, a pitch, a height and 2 angle values.
 * @see CATIGSMFactory#CreateHelix
 */
class ExportedByCATGitInterfaces CATIGSMHelix : public CATBaseUnknown
{
   CATDeclareInterface;
public: 
    /**
     * Gets the helix axis.
     * T<br> Note: he starting point must not be on the helix axis
     *   @return
     *      The helix axis
     */
   virtual    CATISpecObject_var        GetAxis() = 0;
    /**
     * Gets the orientation.
     *   @param oInvert
     *      <br>: FALSE   means that there is no invertion (natural orientation)
     *      <br>: TRUE    to invert this orientation
     */
   virtual    HRESULT    GetInvertAxis(CATBoolean & oInvert) = 0;
    /**
     * Gets the starting point of the helix.
     * <br> Note: The starting point must not be on the helix axis
     *   @return
     *     The starting point
     */
   virtual    CATISpecObject_var GetStartingPoint()= 0;
    /**
     * Gets the profile of the helix.
     *   @return
     *     The profile
     */
   virtual    CATISpecObject_var GetProfile()= 0;
    /**
     * Gets the pitch of the helix.
     *   @param oPitch
     *      The helix pitch.
     */
   virtual    HRESULT   GetPitch( double & oPitch) = 0;
    /**
     * Gets the pitch of the helix.
     *   @param oPitch
     *      The helix pitch.
     */
   virtual    HRESULT                          GetPitch(CATICkeParm_var & oPitch) = 0;
    /**
     * Gets the second pitch of the helix.
     *   @param oPitch
     *      The helix second pitch.
     */
   virtual    HRESULT   GetPitch2( double & oPitch) = 0;
    /**
     * Gets the second pitch of the helix.
     *   @param oPitch
     *      The helix second pitch.
     */
   virtual    HRESULT                          GetPitch2(CATICkeParm_var & oPitch) = 0;
   /**
    * Gets pitch law type.
    *   @param oType
    *      Type of law (from CATGSMBasicLawType enumeration).
    *   @see CATGSMBasicLawType
    */
 virtual HRESULT GetPitchLawType(enum CATGSMBasicLawType & oType) = 0;
    /**
     * Gets the height of the helix.
     *   @param oHeight
     *      The helix height.
     */
   virtual    HRESULT   GetHeight( double & oHeight) = 0;
    /**
     * Gets the height of the helix.
     *   @param oHeight
      *      The helix height.
     */
   virtual    HRESULT                          GetHeight(CATICkeParm_var & oHeight) = 0;
    /**
     * Gets the revolution number of the helix.
     *   @param oRevolutions
     *      Revolutions.
     */
   virtual    HRESULT   GetRevolutions( double & oRevolutions) = 0;
    /**
     * Gets the revolution number of the helix.
     *   @param oRevolutions
     *      Revolutions.
     */
   virtual    HRESULT                          GetRevolutions(CATICkeParm_var & oRevolutions) = 0;
    /**
     * Gets the sense of revolutions.
     *   @param oClockwise
     *      <br>: FALSE   means that revolutions are counter-clockwise
     *      <br>: TRUE    means that revolutions are clockwise
     */
   virtual    HRESULT    GetClockwiseRevolution(CATBoolean & oClockwise) = 0;
    /**
     * Gets the helix starting angle.
     *   @param oStartingAngle
     *      The starting angle.
     */
   virtual    HRESULT   GetStartingAngle( double & oStartingAngle) = 0;
    /**
     * Gets the helix starting angle.
     *   @param oStartingAngle
     *      The starting angle.
     */
   virtual    HRESULT   GetStartingAngle(CATICkeParm_var & oStartingAngle) = 0;
    /**
     * Gets the helix taper angle.
     *   @param oTaperAngle
     *      The taper angle.
     */
   virtual    HRESULT   GetTaperAngle( double & oTaperAngle) = 0;
    /**
     * Gets the helix taper angle.
     *   @param oTaperAngle
     *     The taper angle.
     */
   virtual    HRESULT                          GetTaperAngle(CATICkeParm_var & oTaperAngle) = 0;
    /**
     * Gets the taper angle sense of variation.
     *   @param oTaperOutward
     *      <br>: FALSE   means that helix radius decreases
     *      <br>: TRUE    means that helix radius increases
     */
   virtual    HRESULT    GetTaperOutward(CATBoolean & oTaperOutward) = 0;
    /**
     * Sets the helix axis.
     *   @param iElem1
     *      The new helix axis.
     */
   virtual    HRESULT SetAxis(const CATISpecObject_var iElem1) = 0;
    /**
     * Sets the starting point.
     *   @param iElem1
     *      New starting point.
     */
   virtual    HRESULT SetStartingPoint(const CATISpecObject_var iElem1) = 0;
    /**
     * Sets the profile.
     *   @param iElem1
     *      New profile.
     * <br> Note: iElem1 = NULL_var unsets the profile.
     */
   virtual    HRESULT SetProfile(const CATISpecObject_var iElem1) = 0;
    /**
     *  Sets the helix pitch.
     *   @param iPitch
     *      The new pitch value.
     */
   virtual    HRESULT SetPitch(double iPitch) = 0;
    /**
     *  Sets the helix pitch.
     *   @param iPitch
     *      The new second pitch value.
     */
   virtual    HRESULT SetPitch(const CATICkeParm_var iPitch) = 0;
    /**
     *  Sets the helix second pitch.
     *   @param iPitch
     *      The new second pitch value.
     */
   virtual    HRESULT SetPitch2(double iPitch) = 0;
    /**
     *  Sets the helix second pitch.
     *   @param iPitch
     *      The new second pitch value.
     */
   virtual    HRESULT SetPitch2(const CATICkeParm_var iPitch) = 0;
   /**
    * Sets pitch law type.
    *   @param iType
    *      Type of law (from CATGSMBasicLawType enumeration): <BR>
    *       - CATGSMBasicLawType_Constant, <BR>
    *       - CATGSMBasicLawType_SType.
    *   @see CATGSMBasicLawType
    */
    virtual HRESULT SetPitchLawType(const enum CATGSMBasicLawType iType) = 0;
    /**
     * Sets the helix height.
     *   @param iHeight
     *      The new height value.
     */
   virtual    HRESULT SetHeight(double iHeight) = 0;
    /**
     * Sets the helix height.
     *   @param iHeight
     *      The new height value.
     */
   virtual    HRESULT SetHeight(const CATICkeParm_var iHeight) = 0;
    /**
     * Sets the revolution number.
     *   @param iRevolutions
     *      The new revolutions value.
     */
   virtual    HRESULT SetRevolutions(double iRevolutions) = 0;
    /**
     * Sets the revolution number.
     *   @param iRevolutions
     *      The new revolutions value.
     */
   virtual    HRESULT SetRevolutions(const CATICkeParm_var iRevolutions) = 0;
    /**
     * Sets the starting angle.
     *   @param iStartingAngle
     *      The new starting angle value.
     */
   virtual    HRESULT SetStartingAngle(double iStartingAngle) = 0;
    /**
     * Sets the starting angle.
     *   @param iStartingAngle
     *      The new starting angle value.
     */
   virtual    HRESULT SetStartingAngle(const CATICkeParm_var iStartingAngle) = 0;
    /**
     * Sets the taper angle.
     *   @param iTaperAngle
     *      The new taper angle value.
     */
   virtual    HRESULT SetTaperAngle(double iTaperAngle) = 0;
    /**
     * Sets the taper angle.
     *   @param iTaperAngle
     *      The new taper angle value.
     */
   virtual    HRESULT SetTaperAngle(const CATICkeParm_var iTaperAngle) = 0;
    /**
     * Sets the orientation. 
     *   @param iInvert
     *    <br> :  FALSE means that there is no invertion of the natural orientation 
     *    <br> :  TRUE  to invert this orientation
     */
     virtual    HRESULT SetInvertAxis (CATBoolean iInvert) = 0;
    /**
     * Inverts the orientation of the axis.
     */
   virtual    HRESULT InvertAxis()=0; 
    /**
     * Sets the sense of revolutions.
     *   @param iClockwise
     *     <br> : FALSE   means that revolutions are counter-clockwise
     *     <br> : TRUE    means that revolutions are clockwise
     */
   virtual    HRESULT    SetClockwiseRevolution(CATBoolean iClockwise) = 0;
   /**
     * Sets the taper angle sense of variation. 
     *   @param iTaperOutward
     *     <br> : FALSE   means that helix radius decreases
     *     <br> : TRUE    means that helix radius increases
     */
   virtual    HRESULT    SetTaperOutward(CATBoolean iTaperOutward) = 0;
     /**
     *  Sets the helix Panel Type.
     *   @param iPanelType
     *      The new helix Type.
     */
   virtual    HRESULT SetHelixType(int iPanelType) = 0;
     /**
     *  Gets the helix Panel Type.
     *   @param oPanelType
     *      The new helix Type.
     */
   virtual    HRESULT GetHelixType(int & oPanelType) = 0;

};
CATDeclareHandler (CATIGSMHelix, CATBaseUnknown);
#endif // CATIGSMHelix_H
