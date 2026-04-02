/* -*-c++-*- */
#ifndef CATICounterSunkHole_H
#define CATICounterSunkHole_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include <PartItf.h>
#include <CATINewHole.h>

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATICounterSunkHole;
#else
extern "C" const IID IID_CATICounterSunkHole;
#endif

/**
* Class to manage CounterSunk hole feature.
* <b>Role</b>: This class inherits from CATINewHole. It is
* used to manage angle and depth of a CounterSunk hole.
* @see CATINewHole
*/
class ExportedByPartItf CATICounterSunkHole : public CATINewHole
{
	CATDeclareInterface;

public: 

	/**
	* Returns value of CounterSunk angle.
	* @param oAngle
	*  Value of CounterSunk angle. 
	*/
	virtual void GetCSAngle (double & oAngle) = 0;

	/**
	* Returns  value of CounterSunk depth.
	* @param oDepth
	*  Value of CounterSunk depth. 
	*/
	virtual void GetCSDepth (double & oDepth) = 0;

	/**
	* Returns parameter linked to CounterSunk angle.
	* @param oAngleParm
	*  Parameter linked to CounterSunk angle. 
	*/
	virtual void GetCSAngle (CATICkeParm_var & oAngleParm) = 0;

	/**
	* Returns parameter linked to CounterSunk depth.
	* @param oDepthParm
	*  Parameter linked to CounterSunk depth. 
	*/
	virtual void GetCSDepth (CATICkeParm_var & oDepthParm) = 0;

	/**
	* Sets value of CounterSunk angle.
	* @param iAngle
	*  Value of CounterSunk angle. 
	*/   
	virtual void SetCSAngle (const double iAngle) = 0;

	/**
	* Sets value of CounterSunk depth.
	* @param iDepth
	*   Value of CounterSunk depth. 
	*/
	virtual void SetCSDepth (const double iDepth) = 0;

	/**
	* Returns  value of CounterSunk mode.
	* @param oMode
	*   Value of CounterSunk Mode can be:
	*<br>- 0 - Depth and Angle
  *<br>- 1 - Depth and Diameter
  *<br>- 2 - Angle and Diameter
	*/
	virtual void GetCSMode (int &oMode) = 0;

	/**
	* Sets value of CounterSunk mode.
	* @param iMode
	*   Value of CounterSunk Mode can be:
	*<br>- 0 - Depth and Angle
  *<br>- 1 - Depth and Diameter
  *<br>- 2 - Angle and Diameter
	*/
	virtual void SetCSMode (int &iMode) = 0;

	/**
	* Returns parameter linked to CounterSunk diameter.
	* @param hCSDiam
	*  Parameter linked to CounterSunk diameter. 
	*/
	virtual void GetCSDiameter (CATICkeParm_var & hCSDiam) = 0;

	/**
	* Returns value of CounterSunk diameter.
	* @param oCSDiameter
	*  Value of CounterSunk diameter. 
	*/
	virtual void GetCSDiameter (double &oCSDiameter) = 0;

	/**
	* Sets value of CounterSunk diameter.
	* @param iCSDiameter
	*  Value of CounterSunk diameter. 
	*/ 
	virtual void SetCSDiameter (double &iCSDiameter) = 0;

};

CATDeclareHandler(CATICounterSunkHole, CATINewHole);

#endif // CATICounterSunkHole_H
