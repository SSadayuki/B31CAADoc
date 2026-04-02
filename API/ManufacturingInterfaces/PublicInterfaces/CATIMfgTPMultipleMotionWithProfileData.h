/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2002
//=============================================================================
#ifndef CATIMfgTPMultipleMotionWithProfileData_H
#define CATIMfgTPMultipleMotionWithProfileData_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"

#include "CATIMfgTPMultipleMotion.h"

#include "CATErrorDef.h"
#include "CATListOfDouble.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgTPMultipleMotionWithProfileData;
#else
extern "C" const IID IID_CATIMfgTPMultipleMotionWithProfileData;
#endif

/**
* Interface to manage tool motions with cutter profile data inside tool path.<br>
* A CATIMfgTPMultipleMotionWithProfileData object is a specialized @href CATIMfgTPMultipleMotion object in which
* it is possible to store cutter profile datas.<br>
* As for a @href CATIMfgTPMultipleMotion object, it is possible to store in the CATIMfgTPMultipleMotionWithProfileData object
* several polylines (tool tip points), circle arcs (tool tip points), user syntaxes or NC commands. <br>
* For each tip polyline or tip circle arc, it is possible to associate another polyline or circle arc
* to model cutter profile datas.<br>
*
* @see CATIMfgToolPathFactory
*/

class ExportedByMfgItfEnv CATIMfgTPMultipleMotionWithProfileData : public CATIMfgTPMultipleMotion
{
  CATDeclareInterface ;
  
  public :

/**
*   The side on which are located cutter profile points for the current subtraject.
*      <br><b>Legal values</b>:
*      <ul>
*      <li>UndefSide : Unknown or no cutter profile points for the current subtraject </li>
*      <li>Left : Cutter profile points are located on the left side of the motion </li>
*      <li>Right : Cutter profile points are located on the right side of the motion </li>
*      </ul>
*/  
	  enum ProfileSide {UndefSide=0, Left=1,     Right=2};

/**
*   The type of cutter profile datas for the current subtraject.
*      <br><b>Legal values</b>:
*      <ul>
*      <li>UndefType : No cutter profile datas for the current subtraject </li>
*      <li>Polyline : Cutter profile datas are modelized through a polyline for the current subtraject </li>
*      <li>Circle : Cutter profile datas are modelized through a circle arc for the current subtraject </li>
*      </ul>
*/  
	  enum ProfileType {UndefType=0, Polyline=1, Circle=2};
      
/**
*	Add a polyline to describe cutter profile datas for the current subtraject.
*   @param iProfileSide
*	   The side on which are located cutter profile points
*   @param iX,iY,iZ
*	   The lists of cutter profile points coordinates
**/
	  virtual CATBoolean AddProfilePolyline	   (const ProfileSide&     iProfileSide,
		                                        const CATListOfDouble& iX,
												const CATListOfDouble& iY,
												const CATListOfDouble& iZ) = 0;

/**
*	Add a circle arc to describe cutter profile datas for the current subtraject.
*   @param iProfileSide
*	  The side on which are located cutter profile points
*   @param iX,iY,iZ
*	  The lists of cutter profile points coordinates (the discretization in points of the circle)
*   @param iNormale
*	  The normal vector to the plane containing the circle
*   @param iCenter
*	  The center of the circle
*   @param iRadius
*	  The radius of the circle
**/
	  virtual CATBoolean AddProfileCircleArc	   (const ProfileSide&     iProfileSide,
		                                        const CATListOfDouble& iX,
												const CATListOfDouble& iY,
												const CATListOfDouble& iZ,
												const CATMathVector&   iNormale,
												const CATMathPoint&    iCenter,
												const double           iRadius) = 0;

/**
*	Retrieves cutter profile datas for a polyline.
*   @param iNumber
*	  The number of subtraject
*   @param oProfileSide
*	  The side on which are located cutter profile points
*   @param oX,oY,oZ
*	  The lists of cutter profile points coordinates
**/
	  virtual CATBoolean GetProfilePolyline       (const int              iNumber,
		                                              ProfileSide&     oProfileSide,
		                                              CATListOfDouble& oX,
												      CATListOfDouble& oY,
												      CATListOfDouble& oZ			) = 0;

/**
*	Retrieves cutter profile datas for a circle arc.
*   @param iNumber
*	     The number of subtraject
*   @param oProfileSide
*	     The side on which are located cutter profile points
*   @param oX,oY,oZ
*	     The lists of cutter profile points coordinates (the discretization in points of the circle)
*   @param oNormal
*	     The normal vector to the plane containing the circle
*   @param oCenter
*	     The center of the circle
*   @param oRadius
*	     The radius of the circle
*   @param oAngle
*	     The angle covered by the circle
*   @param oStartTangent
*        The vector tangent to the circle at the start point
**/
	  virtual CATBoolean GetProfileCircleArc      (const int              iNumber,
		                                              ProfileSide&     oProfileSide,
		                                              CATListOfDouble& oX,
												      CATListOfDouble& oY,
												      CATListOfDouble& oZ,
													  CATMathVector&   oNormal,
												      CATMathPoint&    oCenter,
												      double&          oRadius,
                                                      CATAngle&        oAngle,
													  CATMathVector&   oStartTangent) = 0;

/**
*	Retrieves the side on which are located cutter profile datas for a subtraject.
*   @param iNumber
*	     The number of subtraject
*   @param oProfileSide
*	     The side on which are located cutter profile points
**/
	  virtual CATBoolean GetProfileSide           (const int              iNumber,
		                                              ProfileSide&     oProfileSide) = 0;

/**
*	Retrieves the type of cutter profile datas for a subtraject (polyline, circle arc).
*   @param iNumber
*	     The number of subtraject
*   @param oProfileType
*        The type of subtraject
**/
	  virtual CATBoolean GetProfileType           (const int              iNumber,
		                                              ProfileType&     oProfileType) = 0;


/**
*	Retrieves the coordinates of a cutter profile point.
*   @param iSubTraject
*	     The number of subtraject
*  @param iPoint
*	     The index of the cutter profile point
*   @param oX,oY,oZ
*	     The coordinates of the cutter profile point
**/
      virtual CATBoolean GetProfilePoint           (const int     iSubTraject,
		                                         const int     iPoint,
												 double& oX,
												 double& oY,
												 double& oZ) = 0;

/**
*	Retrieves the total number of cutter profile points for a subtraject.
*   @param iSubTraject
*	     The number of subtraject
*   @param oNumberOfPoints
*	     The total number of cutter profile points
**/
      virtual CATBoolean GetNumberOfProfilePoints  (const int     iSubTraject,
												       int& oNumberOfPoints) = 0;

/**
* @nodoc
*/
      virtual CATBoolean GetProfileStartAndEndNumber     (const int iBlock,
		                                               int& oStartNumber,
					    						       int& oEndNumber) = 0;

};

CATDeclareHandler(CATIMfgTPMultipleMotionWithProfileData, CATIMfgTPMultipleMotion);

#endif
