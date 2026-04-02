/* -*-c++-*- */
#ifndef CATIGSMCircle_H
#define CATIGSMCircle_H
 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATICkeParm.h"
#include "CATMathPoint.h"
#include "CATMathDirection.h"
#include "CATIGSMDirection.h"

class CATListValCATISpecObject_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMCircle;
#else
extern "C" const IID IID_CATIGSMCircle;
#endif
/**
 * Interface to circle feature.
 * <b>Role</b>: To set/change the type of the circle.
 * Circle types :<br>
 * <br><b>Legal values </b>: 
 * <br><tt>  CirclePtRad    = 0</tt>    
 * <br><tt>  CircleCtrPt    = 1</tt>    
 * <br><tt>  Circle2Pts     = 2</tt>    
 * <br><tt>  Circle3Pts     = 3</tt>    
 * <br><tt>  CircleBitgtRad = 4</tt>    
 * <br><tt>  CircleBitgtPt  = 5</tt>    
 * <br><tt>  CircleTritgt   = 6</tt>    
 * <br><tt>  CATGSMWFCircleCtrTgt   = 7</tt>    
 * <br><tt>  CATGSMWFCircleCtrAxis  = 8</tt>    
 * <br><tt>  CircleExplicit = 30</tt>
 */
#define CATGSMWFCirclePtRad				0
#define CATGSMWFCircleCtrPt				1
#define CATGSMWFCircle2Pts				2
#define CATGSMWFCircle3Pts				3
#define CATGSMWFCircleBitgtRad			4
#define CATGSMWFCircleBitgtPt			5
#define	CATGSMWFCircleTritgt			6
#define CATGSMWFCircleCtrTgt			7
#define CATGSMWFCircleCtrAxis			8
#define CATGSMWFCircleExplicit			30

class ExportedByCATGitInterfaces CATIGSMCircle : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

    /**
      * different kinds of circle limitation :
      * @param Angles 
      *    The circle is limited by given angles.<br>
      *    This option is only available for center/radius and center/point circles.
      * @param  Whole 
      *    The circle is entire.
      * @param  Trimmed
      *     The circle is trimmed by points <br>
      *     (only when there are at least 2 passing points defining the circle)
      * @param  Complementary 
      *      This is the complementary circle of the previous one.
      */
 enum CATIGSMCircleLimitation {  Angles = 0,
     Whole = 1,
     Trimmed = 2,
     Complementary = 3};

    /**
      * Gets the circle type.
      *   @param oT 
      *      Type of circle
      */
 virtual HRESULT GetCircleType(int & oT) = 0;

    /**
      * Sets the circle type.
      * @param iType
      * The new feature type
      * @param iElems
      * The list of specs to prepare for report to new feature
      * @param iReportedSpecPositionTab
      * Array containing for each feature the position in the new feature attributes structure.<br>
      * Example : iReportedSpecPositionTab[0] = 2,<br>
      *           means that the first feature of iElems list (iElems[1]) has the second position 
      *     in the new feature, according to the replace acceptance
      *           (a point can only be replaced by a point, for instance).<br>
      * if iReportedSpecPositionTab[i]=0 the replace for ith element could not be done.<br>
      *   Array has to be allocated by calling method.
      * @see CATIGSMFactory#CreateCircleType
      */
 virtual HRESULT SetCircleType(int iType,
        CATListValCATISpecObject_var* iElems = NULL, 
        int * iReportedSpecPositionTab = NULL) = 0;
    /**
      * Gets the mathematical center of the circle.
      * This information is available once the circle has been computed.
      * If return integer is 1, the center is not available
      *   @param oCenter 
      *      circle center
      */

 virtual HRESULT GetCenter(CATMathPoint & oCenter) = 0;
    /**
      * Gets the radius of the circle.
      * This information is available once the circle has been computed.
      * If return integer is 1, the center is not available
      *   @param oRadius
      *      circle radius
      */
 virtual HRESULT GetRadius(CATPositiveLength & oRadius) = 0;

    /**
      * Gets the the reference direction for angles calculation of the circle.
      * This information is available once the circle has been computed.
      * If return integer is 1, the center is not available
      *   @param oDirection 
      *      direction 
      */
 virtual HRESULT GetReferenceDirection(CATMathDirection & oDirection) = 0;

    /**
      * Gets the limitation type for the circle (see CATIGSMCircleLimitation enumeration).
      *   @param oLimit 
      *      circle limitation
      */
 virtual HRESULT GetLimitation(CATIGSMCircleLimitation & oLimit) = 0;

    /**
      * Sets the limitation type for the circle (see CATIGSMCircleLimitation enumeration). 
      *   @param iLimit  
      *      Type of Plane 
      *         enum CATIGSMCircleLimitation {Angles, Whole ,Trimmed , Complementary = 3};
      */
 virtual HRESULT SetLimitation(const CATIGSMCircleLimitation  iLimit) = 0;

    /**
      * Gets the start and end angles.
      * Angles are used only when limitation type is "Angles"
      *   @param oStart 
      *      start length 
      *   @param oEnd 
      *      end length 
      */
 virtual HRESULT GetAngles(CATICkeParm_var& oStart, CATICkeParm_var& iEnd) = 0;

    /**
      * Sets the start and end angles.
      * Angles are used only when limitation type is "Angles".
      *   @param iStart 
      *      start length 
      *   @param iEnd 
      *      end length 
      */
 virtual HRESULT SetAngles(const CATICkeParm_var iStart,const CATICkeParm_var iEnd) = 0;


    /**
      * Sets the axis computation Mode.
      *   @param iMode
      *      TRUE - Computes the axis, FALSE - removes the axes. 
      */
 virtual HRESULT SetAxisComputationMode(const CATBoolean iMode) = 0;

    /**  
      * Gets the axis computation Mode.
      *   @param oMode
      *      Boolean value indicating the axis computation mode. 
      */
 virtual HRESULT GetAxisComputationMode(CATBoolean & oMode) = 0;

    /**
	  * Sets the center computation Mode.
	  *   @param iMode
	  *      Boolean value indicating the center computation mode.
	  */
 virtual HRESULT SetCenterComputationMode(const CATBoolean iMode) = 0;

	/**
	  * Gets the center computation Mode.
	  *   @param oMode
	  *      Boolean value indicating the center computation mode.
	  */
 virtual HRESULT GetCenterComputationMode(CATBoolean & oMode) = 0;

    /**
      * Returns the direction if specified at the time of creation of axes.
      */
 virtual HRESULT GetDirection (CATIGSMDirection_var & ohDir) = 0;
   
    /**
      * Sets the direction for axis computation. When direction is specified,
      * the axis with following "Axis Type" are generated.
      *   CATGSMAxisLineType_NormalToDirection
      *   CATGSMAxisLineType_AlignedWithDirection
      * For generation of axis the axis computation mode must be set to TRUE. 
      */
 virtual HRESULT SetDirection (const CATIGSMDirection_var ihDir) = 0;

 /**
      * Returns the axis created.
      * the axis with following "Axis Type" are generated.
      *   @param iRank 
      *   3 - CATGSMAxisLineType_NormalToCircle   
      *   2 - CATGSMAxisLineType_NormalToDirection
      *   1 - CATGSMAxisLineType_AlignedWithDirection
      *   @param oElem
      *      Axis 
      */
 virtual HRESULT GetAxis(const int iRank,CATISpecObject_var & oElem)= 0;

 /**
	  * Returns the center created.
	  *   @param oElem
	  *      Center
	  */
 virtual HRESULT GetComputedCenter(CATISpecObject_var & oElem) = 0;

};
CATDeclareHandler (CATIGSMCircle, CATBaseUnknown);
#endif
