// COPYRIGHT DASSAULT SYSTEMES 2003

#ifndef _SWKIEllipse_h
#define _SWKIEllipse_h

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
//    SWKIEllipse interface.
//    This interface offers non-IDL ellipse services.
//    An ellipse is aggregated by a segment and is used for the
//    construction of meshes.  An ellipse is also a valid site for
//    the target of an IK constraint.
//
// *****************************************************************************
//  Usage:
//  ------
//
// *****************************************************************************
//  Inheritance:
//  ------------
//
//    SWKIBodyElement
//
// *****************************************************************************
//  Main Methods:
//  -------------
//
//    GetOwner
//    GetCenter
//    GetMajorAxis
//    GetMinorAxis
//    GetPosition
//    GetNormalVector
//    GetMainAxis
// *****************************************************************************
//  History
//  -------
//
//  Author: Jean-Guy AUGUSTIN
//  Date  : 00/03/28
//  Goal  : Creation
// *****************************************************************************
//
// --- DNBHumanModelingInterfaces
#include "SWKIBodyElement.h"
//
// --- Mathematics
class CATMathPoint;
class CATMathVector;
//
// --- DNBHumanModelingInterfaces
class SWKISegment;

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
extern ExportedBySWKHumanModelingItf IID IID_SWKIEllipse;
#else
extern "C" const IID IID_SWKIEllipse;
#endif

/**
  *  This interface provides non-IDL Ellipse services.<br>
  *  An ellipse is aggregated by a segment and is used for the<br>
  *  construction of meshes.  An ellipse is also a valid site for<br>
  *  the positionning of an IK constraint.
  **/

enum SWKPositionSpec
{
	SWKPositionSpecNone      = 0,
	SWKPositionSpecFront     = 1,
	SWKPositionSpecBack      = 2,
	SWKPositionSpecTop       = 3,
	SWKPositionSpecBottom    = 4,
	SWKPositionSpecLeft      = 5,
	SWKPositionSpecRight     = 6,
	SWKPositionSpecBegin     = 7,
	SWKPositionSpecEnd       = 8,
	SWKPositionSpecMajorAxis = 9,
	SWKPositionSpecMinorAxis = 10
};

enum SWKCoordinateSpace
{
	SWKCoordinateSpaceLocal  = 0,
	SWKCoordinateSpaceGlobal = 1
};

class ExportedBySWKHumanModelingItf SWKIEllipse : public SWKIBodyElement
{
	CATDeclareInterface;

 public:

	/**
	  *  @return The segment owning this ellipse.<br>
	  **/
	virtual SWKISegment * GetOwner() const = 0;

	/**
	  *  @return The major axis value, in centimeters.<br>
	  **/
	virtual double GetMajorAxis() const = 0;

	/**
	  * @return The minor axis value, in centimeters.<br>
	  **/
	virtual double GetMinorAxis() const = 0;

	/**
	  * Return The coordinates of the center of the ellipse.<br>
	  *
	  * @param piCoordSpace The coordinate space in which the center will be<br>
	  * calculated (either <code>SWKCoordinateSpaceLocal</code> or<br>
	  * <code>SWKCoordinateSpaceGlobal</code>).<br>
	  * <br>
	  * If this parameter is <code>SWKCoordinateSpaceGlobal</code>,<br>
	  * then the point will be calculated with respect to the root<br>
	  * of the manikin.<br>
	  * <br>
	  * If this parameter is <code>SWKCoordinateSpaceLocal</code>,<br>
	  * then the position will be calculated with respect to the beginning<br>
	  * of the segment owning this ellipse.<br>
	  **/
	virtual CATMathPoint GetCenter(SWKCoordinateSpace piCoordSpace =
											SWKCoordinateSpaceGlobal) const = 0;

	/**
	  * Return The main axis, which is perpendicular to the normal<br>
	  * of the ellipse.
	  *
	  * @param piCoordSpace The coordinate space in which the axis will be<br>
	  * calculated (either <code>SWKCoordinateSpaceLocal</code> or<br>
	  * <code>SWKCoordinateSpaceGlobal</code>).<br>
	  * <br>
	  * If this parameter is <code>SWKCoordinateSpaceGlobal</code>,<br>
	  * then the axis will be calculated with respect to the root<br>
	  * of the manikin.<br>
	  * <br>
	  * If this parameter is <code>SWKCoordinateSpaceLocal</code>,<br>
	  * then the axis will be calculated with respect to the beginning<br>
	  * of the segment owning this ellipse.<br>
	  **/
	virtual CATMathVector GetMainAxis(SWKCoordinateSpace piCoordSpace =
											SWKCoordinateSpaceGlobal) const = 0;

	/**
	  * @return A point on the ellipse, based on a position specification.<br>
	  * <br>
	  * The point to be returned is calculated using the following<br>
	  * algorithm:<br>
	  * <br>
	  * 1) If piPositionSpec = <code><b>SWKPositionSpecNone</b></code>, the coordinates of the<br>
	  * center of the ellipse are returned.<br>
	  * <br>
	  * 2) If piPositionSpec = <code><b>SWPostionFront</b></code>, the point on the<br>
	  * ellipse's circumference with the highest X coordinate is<br>
	  * returned.  If there are more than one such point, the<br>
	  * point with the highest Y coordinate is chosen.<br>
	  * <br>
	  * 3) If piPositionSpec = <code><b>SWKPositionSpecBack</b></code>, the point on the<br>
	  * ellipse's circumference with the lowest X coordinate is<br>
	  * returned.  If there are more than one such point, the<br>
	  * point with the lowest Y coordinate is chosen.<br>
	  * <br>
	  * 4) If piPositionSpec = <code><b>SWKPositionSpecTop</b></code>, the point on the<br>
	  * ellipse's circumference with the highest Z coordinate is<br>
	  * returned.  If there are more than one such point, the<br>
	  * point with the highest X coordinate is chosen.<br>
	  * <br>
	  * 5) If piPositionSpec = <code><b>SWKPositionSpecBottom</b></code>, the point on the<br>
	  * ellipse's circumference with the lowest Z coordinate is<br>
	  * returned.  If there are more than one such point, the<br>
	  * point with the lowest X coordinate is chosen.<br>
	  * <br>
	  * 6) If piPositionSpec = <code><b>SWKPositionSpecLeft</b></code>, the point on the<br>
	  * ellipse's circumference with the highest Y coordinate is<br>
	  * returned.  If there are more than one such point, the<br>
	  * point with the highest Z coordinate is chosen.<br>
	  * <br>
	  * 7) If piPositionSpec = <code><b>SWKPositionSpecRight</b></code>, the point on the<br>
	  * ellipse's circumference with the lowest Y coordinate is<br>
	  * returned.  If there are more than one such point, the<br>
	  * point with the lowest Z coordinate is chosen.<br>
	  * <br>
	  * 8) If piPositionSpec = <code><b>SWKPositionSpecBegin</b></code>, the coordinates of the<br>
	  * center of the ellipse are returned.<br>
	  * <br>
	  * 9) If piPositionSpec = <code><b>SWKPositionSpecEnd</b></code>, the coordinates of the<br>
	  * center of the ellipse are returned.<br>
	  * <br>
	  * 10) If piPositionSpec = <code><b>SWKPositionSpecMajorAxis</b></code>, the point returned<br>
	  * is that on the circumference of the ellipse such that the distance<br>
	  * between that point and the center of the ellipse equals the major<br>
	  * axis.<br>
	  * <br>
	  * 11) If piPositionSpec = <code><b>SWKPositionSpecMinorAxis</b></code>, the point returned<br>
	  * is that on the circumference of the ellipse such that the distance<br>
	  * between that point and the center of the ellipse equals the the minor<br>
	  * axis.<br>
	  * <br>
	  * @param piCoordSpace The coordinate space in which the points will be<br>
	  * calculated (either <code>SWKCoordinateSpaceLocal</code> or<br>
	  * <code>SWKCoordinateSpaceGlobal</code>).<br>
	  * <br>
	  * If this parameter is <code>SWKCoordinateSpaceGlobal</code>,<br>
	  * then the position will be calculated with respect to the root<br>
	  * of the manikin.<br>
	  * <br>
	  * If this parameter is <code>SWKCoordinateSpaceLocal</code>,<br>
	  * then the position will be calculated with respect to the beginning<br>
	  * of the segment owning this ellipse.<br>
	  **/
	virtual CATMathPoint GetPosition(SWKPositionSpec piPositionSpec,
				SWKCoordinateSpace piCoordSpace = SWKCoordinateSpaceLocal) const = 0;

	/**
	  * @return The normal vector in local or global coordinates.<br>
	  * @param piCoordSpace The coordinate space in which the points will be<br>
	  * calculated (either <code>SWKCoordinateSpaceLocal</code> or<br>
	  * <code>SWKCoordinateSpaceGlobal</code>).<br>
	  * <br>
	  * If this parameter is <code>SWKCoordinateSpaceGlobal</code>,<br>
	  * then the normal vector will be calculated with respect to the root<br>
	  * of the manikin.<br>
	  * <br>
	  * If this parameter is <code>SWKCoordinateSpaceLocal</code>,<br>
	  * then the normal vector will be calculated with respect to the beginning<br>
	  * of the segment owning this ellipse.<br>
	  **/
	virtual CATMathVector GetNormalVector(SWKCoordinateSpace piCoordSpace =
											SWKCoordinateSpaceLocal) const = 0;
};

CATDeclareHandler(SWKIEllipse, SWKIBodyElement);

#endif
