/* -*-c++-*- */
#ifndef CATIGSMUseSpiral_H
#define CATIGSMUseSpiral_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"
#include "CATIMmiMechanicalFeature.h"
#include "CATICkeParm.h"
#include "CATIGSMUseDirection.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUseSpiral;
#else
extern "C" const IID IID_CATIGSMUseSpiral;
#endif
/**
 * Interface to Spiral feature.
 * <b>Role</b>: Allows you to access data of the Spiral feature.
 * @see CATIGSMUseFactory#CreateSpiral
 */
class ExportedByCATGSMUseItf CATIGSMUseSpiral : public CATBaseUnknown
{
   CATDeclareInterface;
public: 


 /**
  * Type for Spiral definition.
  * <b>Role</b>:  Used for Spiral creation and modifications
  *   @param AngleRadius
  *     Angle and Radius.
  *   @param AnglePitch
  *     Angle and Pitch.
  *   @param PitchRadius
  *     Pitch and Radius.
  */
  enum Type { AngleRadius, AnglePitch, PitchRadius };

   /**
    * Gets spiral type.
    *   @param oType
    *      Type of spiral (from Type enumeration).
    */
 virtual HRESULT GetType(enum Type & oType) = 0;
    /**
     * Gets the spiral planar support.
     *   @param oElem
     *      Planar support.
     */
   virtual HRESULT GetSupport(CATIMmiMechanicalFeature_var & oElem) = 0;
    /**
     * Gets the spiral center point.
     *   @param oElem
     *      Center point.
     */
   virtual HRESULT GetCenterPoint(CATIMmiMechanicalFeature_var & oElem) = 0;
    /**
     * Gets the spiral axis.
     *   @param oAxis 
     *   @see CATIGSMUseDirection
     */
    virtual HRESULT GetAxis(CATIGSMUseDirection_var & oAxis) =0;
    /**
     * Gets the orientation.
     *   @param oInvert
     *      <br>: FALSE   means that there is no invertion (natural orientation)
     *      <br>: TRUE    to invert this orientation
     */
   virtual HRESULT GetInvertAxis(CATBoolean & oInvert) = 0;
    /**
     * Gets the spiral starting radius.
     *   It defines the starting point: distance from the center point on the axis.
     *   @param oValue
     *      Spiral starting radius.
     */
   virtual HRESULT GetStartingRadius(double & oValue) = 0;
    /**
     * Gets the spiral starting radius.
     *   @param oValue
     *      Spiral starting radius.
     */
   virtual HRESULT GetStartingRadius(CATICkeParm_var & oValue) = 0;
    /**
     * Gets the sense of revolutions.
     *   @param oClockwise
     *      <br>: FALSE   means that revolutions are counter-clockwise
     *      <br>: TRUE    means that revolutions are clockwise
     */
   virtual    HRESULT    GetClockwiseRevolution(CATBoolean & oClockwise) = 0;
    /**
     * Gets the spiral ending angle.
     *   @param oValue
     *      Spiral ending angle.
     */
   virtual    HRESULT   GetEndingAngle( double & oValue) = 0;
    /**
     * Gets the spiral ending angle.
     *   @param oValue
     *      Spiral ending angle.
     */
   virtual    HRESULT   GetEndingAngle(CATICkeParm_var & oValue) = 0;
    /**
     * Gets the spiral ending radius.
     *   @param oValue
     *      Spiral ending radius.
     */
   virtual    HRESULT   GetEndingRadius( double & oValue) = 0;
    /**
     * Gets the spiral ending radius.
     *   @param oValue
     *      Spiral ending radius.
     */
   virtual    HRESULT   GetEndingRadius(CATICkeParm_var & oValue) = 0;
    /**
     * Gets the revolution number.
     *   @param oRevolutions
     *      Revolutions.
     */
   virtual    HRESULT   GetRevolutions( double & oRevolutions) = 0;
    /**
     * Gets the revolution number.
     *   @param oRevolutions
     *      Revolutions.
     */
   virtual    HRESULT  GetRevolutions(CATICkeParm_var & oRevolutions) = 0;
    /**
     * Gets the spiral pitch.
     *   @param oPitch
     *      Spiral pitch.
     */
   virtual HRESULT GetPitch(double & oPitch) = 0;
    /**
     * Gets the spiral pitch.
     *   @param oPitch
     *      Spiral pitch.
     */
   virtual HRESULT GetPitch(CATICkeParm_var & oPitch) = 0;


   /**
    * Sets spiral type.
    *   @param iType
    *      Type of spiral (from Type enumeration):
    *       - AngleRadius
    *       - AnglePitch
    *       - PitchRadius.
    */
    virtual HRESULT SetType(const enum Type iType) = 0;
   /**
     * Sets the spiral planar support.
     *   @param iElem
     *      Planar support.
     */
    virtual HRESULT SetSupport(const CATIMmiMechanicalFeature_var iElem) = 0;
   /**
     * Sets the spiral center point.
     *   @param iElem
     *      Center point.
     */
    virtual HRESULT SetCenterPoint(const CATIMmiMechanicalFeature_var iElem) = 0;
    /**
     * Sets the Spiral axis.
     *   @param iElem1
     *      The new Spiral axis.
     */
   virtual    HRESULT SetAxis(const CATIMmiMechanicalFeature_var iElem1) = 0;
    /**
     * Sets the orientation. 
     *   @param iInvert
     *    <br> :  FALSE means that there is no invertion of the natural orientation 
     *    <br> :  TRUE  to invert this orientation
     */
     virtual    HRESULT SetInvertAxis (const CATBoolean iInvert) = 0;
    /**
     * Sets the spiral starting radius.
     *   It defines the starting point: distance from the center point on the axis.
     *   @param iValue
     *      Spiral starting radius.
     */
   virtual HRESULT SetStartingRadius(const double iValue) = 0;
    /**
     * Sets the spiral starting radius.
     *   It defines the starting point: distance from the center point on the axis.
     *   @param iValue
     *      Spiral starting radius.
     */
   virtual HRESULT SetStartingRadius(const CATICkeParm_var iValue) = 0;
    /**
     * Sets the revolution number.
     *   @param iRevolutions
     *      The new revolutions value.
     */
   virtual HRESULT SetRevolutions(const double iRevolutions) = 0;
    /**
     * Sets the revolution number.
     *   @param iRevolutions
     *      The new revolutions value.
     */
   virtual HRESULT SetRevolutions(const CATICkeParm_var iRevolutions) = 0;
    /**
     * Sets the sense of revolutions.
     *   @param iClockwise
     *     <br> : FALSE   means that revolutions are counter-clockwise
     *     <br> : TRUE    means that revolutions are clockwise
     */
   virtual    HRESULT    SetClockwiseRevolution(const CATBoolean iClockwise) = 0;


    /**
     * Sets the spiral ending angle.
     *   @param iValue
     *      Spiral ending angle.
     */
   virtual    HRESULT   SetEndingAngle(const double iValue) = 0;
    /**
     * Sets the spiral ending angle.
     *   @param iValue
     *      Spiral ending angle.
     */
   virtual    HRESULT   SetEndingAngle(const CATICkeParm_var iValue) = 0;
    /**
     * Sets the spiral ending radius.
     *   @param iValue
     *      Spiral ending radius.
     */
   virtual    HRESULT   SetEndingRadius(const double iValue) = 0;
    /**
     * Sets the spiral ending radius.
     *   @param iValue
     *      Spiral ending radius.
     */
   virtual    HRESULT   SetEndingRadius(const CATICkeParm_var iValue) = 0;
    /**
     * Sets the spiral pitch.
     *   @param iPitch
     *      Spiral pitch.
     */
   virtual HRESULT SetPitch(const double iPitch) = 0;
    /**
     * Sets the spiral pitch.
     *   @param iPitch
     *      Spiral pitch.
     */
   virtual HRESULT SetPitch(const CATICkeParm_var iPitch) = 0;

};
CATDeclareHandler (CATIGSMUseSpiral, CATBaseUnknown);
#endif // CATIGSMUseSpiral_H
