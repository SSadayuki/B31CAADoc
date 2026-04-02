/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1998
//=============================================================================

#ifndef CATIMfgCircularTraject_H
#define CATIMfgCircularTraject_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATIMfgTPSingleMotion.h"
#include "CATBooleanDef.h"
#include "CATMathPoint.h"
#include "CATMathVector.h"
#include "CATMathDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgCircularTraject;
#else
extern "C" const IID IID_CATIMfgCircularTraject;
#endif

/**
* Interface to manage parameters of circular traject objects inside manufacturing tool path.<br>
* A circular object is characterized by a type of traject, a type of feedrate, the radius of the circle,
* the center of the circle, the normal to the plane containing the circle.<br>
* A circular traject must also contain its discretization in points (tip points parameter).<br>
* 
* PLEASE NOTE that you should use CATIMfgTPMultipleMotion interface instead of CATIMfgCircularTraject.<br>
* CATIMfgTPMultipleMotion interface allows to store linear motions, circular motions and PP Instructions
* (described by a string or by a NC_Command and a NC_Instruction described in PP Table). <br>
* It needs less memory and CPU time.<br>
* It is the recommended way to modelize tool motions.<br>
*
* 
* @see CATIMfgTPMultipleMotion
*/

class ExportedByMfgItfEnv CATIMfgCircularTraject : public CATIMfgTPSingleMotion
{
  CATDeclareInterface ;
  
  public :
    
  /**
   *	Retrieves the normal to the plane containing the circle.
   *   @param oNormal
   *      The normal to the plane containing the circle
   **/
  virtual CATBoolean GetNormale (CATMathVector& oNormal) =0 ;

  /**
   *	Retrieves the center of the circle.
   *   @param oCenter
   *	  The center of the circle
   **/
  virtual CATBoolean GetCenter (CATMathPoint& oCenter) =0 ;

  /**
   *	Retrieves the radius of the circle.
   *   @param oRadius
   *	  The radius of the circle
   **/
  virtual CATBoolean GetRadius (double& oRadius) =0 ;

  /**
   *	Retrieves the angle described by the circle.
   *   @param oAngle
   *	The angle described by the circle
   **/
  virtual CATBoolean GetAngle (CATAngle& oAngle) =0 ;

  /**
   *	Retrieves the tangent vector to the circle at its start point.
   *   @param oTangent
   *	The tangent vector to the circle at its start point
  **/
  virtual CATBoolean GetStartTangent (CATMathVector& oTangent) =0 ;
};

CATDeclareHandler(CATIMfgCircularTraject, CATIMfgTPSingleMotion);

#endif







