// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef _SWKIPrefAngle_h
#define _SWKIPrefAngle_h

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
//    This interface represents a preferred angle on a degree of freedom (DOF)
//    of the manikin.
//
//    A preferred  angle is a sub-range taken on the total range of motion of
//    the DOF, to which the application can assign a score, in order to perform
//    postural analysis.
//
// *****************************************************************************
//  Usage:
//  ------
//
//
// *****************************************************************************
//  Inheritance:
//  ------------
//
//  SWKIManikinPart
//
// *****************************************************************************
//  Main Methods:
//  -------------
// 
//    GetID
//    GetPrefAngleName
//    SetPrefAngleName
//    GetMin
//    GetMinInterSegment
//    GetMax
//    GetMaxInterSegment
//    GetRealMin
//    GetRealMax
//    SetColor
//    GetColor
//    SetScore
//    GetScore
//    GetOwner
//    GetManikin
//    GetIndex
// *****************************************************************************
//  History
//  -------
//
//  Author: Jean-Guy AUGUSTIN
//  Date  : 03/03/18
//  Goal  : Creation
// *****************************************************************************
//
// --- DNBHumanModelingInterfaces
#include "SWKIManikinPart.h"
//
// --- System
#include "CATString.h"
//
// --- DNBHumanModelingInterfaces
class SWKICustomizedJoint;
class SWKIDOF;
class SWKIManikin;
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
extern ExportedBySWKHumanModelingItf IID IID_SWKIPrefAngle;
#else
extern "C" const IID IID_SWKIPrefAngle;
#endif

class ExportedBySWKHumanModelingItf SWKIPrefAngle : public SWKIManikinPart
{
	CATDeclareInterface;

 public:

	/**
	  * @return The ID of the preferred angle.
	  * This string is an identifier which can uniquely designate
	  * the preferred angle.
	  **/
	virtual CATString GetID() const = 0;

	/**
	  * @return The name of the associated preferred angle.
	  * This is the name the application may give to the preferred
	  * angle (ex.: "Confortable Position" or "Less Preferred Position").
	  **/
	virtual CATUnicodeString GetPrefAngleName() = 0;

	/**
	  * Set the name of this preferred angle.
	  * This is the name the application may give to the preferred
	  * angle (ex.: "Confortable Position" or "Less Preferred Position").
	  *
	  * @param piNewName The new name of this preferred angle.
	  *
	  * @return A status code indicating success or failure.
	  **/
	virtual HRESULT SetPrefAngleName(const CATUnicodeString & piNewName) = 0;

	/**
	  * @return The minimum limit of the preferred angle.
	  * Since a preferred angle is a sub-range in the total
	  * range of motion of a DOF, this method returns the lower
	  * bound of that range.<br><br>
	  *
	  * The value returned takes the range of motion of the DOF
	  * into account, that is, this value cannot be lower than
	  * the absolute lower limitation of the associated degree of
	  * freedom.
	  **/
	virtual double GetMin() const = 0;

	/**
	  * Returns the lower limit value of a preferred angle in inter-segment mode.
	  * @return The value of the lower limit.
	  * The value returned takes the range of motion of the DOF
	  * into account, that is, this value cannot be lower than
	  * the absolute lower limitation of the associated degree of
	  * freedom.
	  **/
	virtual double GetMinInterSegment() const = 0;

	/**
	  * @return The maximum limit of the preferred angle.
	  * Since a preferred angle is a sub-range in the total
	  * range of motion of a DOF, this method returns the upper
	  * bound of that range.<br><br>
	  *
	  * The value returned takes the range of motion of the DOF
	  * into account, that is, this value cannot be higher than
	  * the absolute upper limitation of the associated degree of
	  * freedom.
	  **/
	virtual double GetMax() const = 0;

	/**
	  * Set the max limitation of this preferred angle.
	  *
	  * @param piMin   The value of min limitation.
	  * @param piMax   The value of max limitation.
	  **/
	virtual void SetLimits(const double piMin, const double piMax) const = 0;

	/**
	  * Returns the upper limit value of a preferred angle in inter-segment mode.
	  * @return The value of the upper limit.
	  * The value returned takes the range of motion of the DOF
	  * into account, that is, this value cannot be higher than
	  * the absolute upper limitation of the associated degree of
	  * freedom.
	  **/
	virtual double GetMaxInterSegment() const = 0;

	/**
	  * @return The minimum limit of the preferred angle.
	  * Since a preferred angle is a sub-range in the total
	  * range of motion of a DOF, this method returns the lower
	  * bound of that range.<br><br>
	  *
	  * The value returned does not take the range of motion of the DOF
	  * into account, that is, this value <strong>can</strong> be lower
	  * than the absolute lower limitation of the associated degree of
	  * freedom.
	  **/
	virtual double GetRealMin() const = 0;

	/**
	  * @return The maximum limit of the preferred angle.
	  * Since a preferred angle is a sub-range in the total
	  * range of motion of a DOF, this method returns the upper
	  * bound of that range.<br><br>
	  *
	  * The value returned does not take the range of motion of the DOF
	  * into account, that is, this value <strong>can</strong> be higher
	  * than the absolute upper limitation of the associated degree of
	  * freedom.
	  **/
	virtual double GetRealMax() const = 0;

	/**
	  * Set the color of this preferred angle.
	  *
	  * @param piRed   The red component of the RGBA color.
	  * @param piGreen The green component of the RGBA color.
	  * @param piBlue  The blue component of the RGBA color.
	  * @param piAlpha The alpha (transparency) component of the RGBA color.
	  **/
	virtual void SetColor(int piRed, int piGreen, int piBlue, int piAlpha = -1) = 0;

	/**
	  * @return The color of this preferred angle.
	  *
	  * @param poRed   The red component of the RGBA color.
	  * @param poGreen The green component of the RGBA color.
	  * @param poBlue  The blue component of the RGBA color.
	  * @param poAlpha The alpha (transparency) component of the RGBA color.
	  **/
	virtual void GetColor(int & poRed, int & poGreen, int & poBlue, int & poAlpha) = 0;

	/**
	  * @return The color of this preferred angle.
	  * 
	  * The number returned is a concatenation of the four components
	  * (R, G, B and A) of the color of the preferred angle.
	  **/
	virtual int GetColor() const = 0;

	/**
	  * Set the score of this preferred angle.
	  * This is a user-set value to grade the preferred angle
	  * in terms of comfort and/or feasability, in order to calculate
	  * a global postural score.
	  *
	  * @param piNewScore The new score assigned to this preferred angle
	  **/
	virtual void SetScore(double piNewScore) = 0;

	/**
	  * @return The current score assigned to this preferred angle.
	  * By default, all scores are set to <code>0.0</code>.
	  **/
	virtual double GetScore() const = 0;

	/**
	  * @return The owner (degree of freedom) of this preferred angle.
	  **/
	virtual SWKIDOF * GetOwner() = 0;

	/**
	  * @return The owner (degree of freedom) of this preferred angle.
	  **/
	virtual SWKICustomizedJoint * GetCustomizedJoint() = 0;

	/**
	  * @return The manikin owning this preferred angle.
	  **/
	virtual SWKIManikin * GetManikin() = 0;

	/**
	  * @return The index of the preferred angle, that is,
	  * its position in the preferred angles list of one DOF.
	  * First preferred angle is at index 0.
	  **/
	virtual unsigned GetIndex() = 0;

	/**
	  * update internal index of the preferred angles of customized joint.
	  **/
	virtual void UpdateIndex(const unsigned piIndex) = 0;
};

CATDeclareHandler(SWKIPrefAngle, SWKIManikinPart);

#endif
