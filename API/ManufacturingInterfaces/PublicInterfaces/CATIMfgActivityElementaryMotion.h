#ifndef CATIMfgActivityElementaryMotion_H
#define CATIMfgActivityElementaryMotion_H

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U3
*/
//=============================================================================
//

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATMathPlane.h"
#include "CATMathVector.h"
#include "CATMathPoint.h"
#include "CATListOfCATUnicodeString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgActivityElementaryMotion;
#else
extern "C" const IID IID_CATIMfgActivityElementaryMotion;
#endif
/**   
 * Interface dedicated to manage elementary macro motion.
 * <b>Role</b>: This interface offers services to access datas from elementary motion.
 */
class ExportedByMfgItfEnv CATIMfgActivityElementaryMotion : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:

    /**
    * Read the type of an Elementary Motion.
    * The Horizontal type corresponds to Tangent and Normal types of Macro User Interface in the MO edit Panel.
    * @param oElementaryMotionType
    *	<ul>
    *	<li>  1:Axial       </li>
    *   <li>  2:Horizontal  </li>
    *	<li>  3:Circular    </li> 
    *	<li>  4:PP          </li> 
    *	<li>  5:Ramping     </li> 
    *	<li>  6:GoToAPlane  </li> 
    *	<li>  7:GoToPt      </li> 
    *	<li>  8:DeltaLnDist </li> 
    *	<li>  9:ToolAxis    </li> 
    *	</ul>
    */
	
	  virtual HRESULT GetElementaryMotionType  (int &oElementaryMotionType)=0;

    /**
	* Returns if a elementary motion is active or not.
    * @param oActive
    *	<ul>
    *	<li> 0:not active </li>
    *   <li> 1:Active     </li>
    *	</ul>
	*/
	  virtual HRESULT IsActive  (int& oActive)=0; 

/**
 *	Read a feedrateType From an Elementary Motion.
 * @param oFeedrateType
 *	<ul>
 *	<li> oFeedrateType (1:Machining Feedrate, 2:Approach Feedrate, 3:Retract Feedrate, 4:Rapid Feedrate, 5:Local - Undefined Feedrate, 6:Finishing, 7:Air Cutting)
 *	</ul>
 */	     
	  virtual HRESULT GetFeedrateType(int &oFeedrateType)=0;

/**
 *	Read a feedrateValue from an Elementary Motion if  FeedrateType = Local /Undefined Feedrate/.
 * @param oFeedrate The feedrate value
 */
	  virtual HRESULT GetFeedrateValue(double &oFeedrate)=0;

/**
 *	Read a SpindleSpeedType from an Elementary Motion.
 * @param oSpindleSpeedType
 *	<ul>
 *	<li> (1: Machining 2:Approach, 3: Retract , 4: Rapid, 5:Local -  Undefined Spindle Speed)
 *	</ul>
 */
	  virtual HRESULT GetSpindleSpeedType(int &oSpindleSpeedType)=0;

/**
 *	Read a SpindleSpeedValue from an Elementary Motion if  SpindleSpeedType = Local /Undefined Spindle Speed.
 * @param oSpindle The spindle spped value
 */
	  virtual HRESULT GetSpindleSpeedValue(double &oSpindle)=0;

/**
 *	Read a DistanceValue from an Elementary Motion if  ElementaryMotionType = Horizontal or Axial or DeltaLnDist.
 * @param oDistanceValue The distance value
 */
	  virtual HRESULT GetDistanceValue(double &oDistanceValue)=0;

/**
 *	Read a HorizontalAngleValue from an Elementary Motion if  ElementaryMotionType = Horizontal.
 * @param oHorizontalAngleValue The horizontal angle value
 */
	  virtual HRESULT GetHorizontalAngleValue(double &oHorizontalAngleValue)=0;

/**
 *	Read a VerticalAngleValue from an Elementary Motion if  ElementaryMotionType = Horizontal.
 * @param oVerticalAngleValue The vertical angle value
 */
	  virtual HRESULT GetVerticalAngleValue(double &oVerticalAngleValue)=0;

/**
 *	Read CircleRadiusValue from an Elementary Motion if  ElementaryMotionType = Circular.
 * @param oCircleRadiusValue The circle radius value
 */
	  virtual HRESULT GetCircleRadiusValue (double &oCircleRadiusValue)=0;

/**
 *	Read AngularSectorValue from an Elementary Motion if  ElementaryMotionType = Circular.
 * @param oAngularSectorValue The angular sector value
 */
 	  virtual HRESULT GetAngularSectorValue (double &oAngularSectorValue)=0;

/**
 *	Read AngularOrientationValue from an Elementary Motion if  ElementaryMotionType = Circular.
 * @param oAngularOrientationValue The angular orientation value
 */
 	  virtual HRESULT GetAngularOrientationValue (double &oAngularOrientationValue)=0;

/**
 *	Read RampingAngleValue from an Elementary Motion if  ElementaryMotionType = Ramping.
 * @param oRampingAngleValue The ramping angle value
 */
	  virtual HRESULT GetRampingAngleValue (double &oRampingAngleValue)=0;

/**
 *	Read HorizontalSafetyDistanceValue from an Elementary Motion if  ElementaryMotionType = Ramping.
 * @param oHorizontalDistanceValue The horizontal distance value
 */
 	  virtual HRESULT GetHorizontalSafetyDistanceValue (double &oHorizontalDistanceValue)=0;

/**
 *	Read VerticalSafetyDistanceValue from an Elementary Motion if  ElementaryMotionType = Ramping.
 * @param oVerticalDistanceValue The vertical distance value
 */
 	  virtual HRESULT GetVerticalSafetyDistanceValue (double &oVerticalDistanceValue)=0;

/**
 *	Read Plane  from an Elementary Motion if  ElementaryMotionType = GoToAPlane.
 * @param oPlane The plane
 */
	  virtual HRESULT GetMotionPlane (CATMathPlane &oPlane)=0;	  

/**
 *	Read the way to move to the Plane  from an Elementary Motion if  ElementaryMotionType = GoToAPlane.
 * @param oMode
 *	<ul>
 *	<li>  0:perpendicular to the plane move </li>
 *  <li>  1: axial move </li>
 *	</ul>
 */
	  virtual HRESULT GetMotionToPlaneMode (int &oMode)=0;	  

/**
 *	Read PPWordList  from an Elementary Motion if  ElementaryMotionType = PP.
 * @param oPPWordList The PP words list
 */
	  virtual HRESULT GetPPWordList (CATListOfCATUnicodeString& oPPWordList)=0;	 


# ifdef CATIAV5R8

/**
 *	Read DirectionVector  from an Elementary Motion if  ElementaryMotionType = DeltaLnDist.
 * @param oVector The direction vector
 */
	  virtual HRESULT GetMotionDirectionVector (CATMathVector &oVector)=0;	

/**
 *	Read Point  from an Elementary Motion if  ElementaryMotionType = GoToAPpoint.
 * @param oPoint The point
 */
	  virtual HRESULT GetMotionPoint (CATMathPoint &oPoint)=0;	

/**
 *	Read DirectionVector  from an Elementary Motion if  ElementaryMotionType = ToolAxis.
 * @param oVector The direction vector
 */
	  virtual HRESULT GetMotionToolAxis (CATMathVector &oVector)=0;


# endif

/**
* @nodoc
*/  
	  virtual HRESULT GetFeedrate (CATBaseUnknown_var& oFeedrate)=0;
    
};

CATDeclareHandler(CATIMfgActivityElementaryMotion, CATBaseUnknown) ;
#endif








