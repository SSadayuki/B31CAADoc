/* -*-c++-*- */
#ifndef CATIGSMUsePlane_H
#define CATIGSMUsePlane_H
 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"
#include "CATIMmiMechanicalFeature.h"
#include "CATGSMOrientation.h"
class CATListValCATIMmiMechanicalFeature_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUsePlane;
#else
extern "C" const IID IID_CATIGSMUsePlane;
#endif
/**
 * Interface to plane feature.  
 * <b>Role</b>: 
 * - set/change the type of the plane and
 * - modify the orientation of the plane (in case of offset/angle type planes). 
 * - define the position of the plane for its representation
 * Plane types: 
 * <br><b>Legal values </b>: 
 * <br><tt>  PlaneEquation = 0</tt>    
 * <br><tt>  PlaneThrg3    = 1</tt>    
 * <br><tt>  PlaneThrg2    = 2</tt>    
 * <br><tt>  Plane1Pt1Ln   = 3</tt>    
 * <br><tt>  PlaneThrg1    = 4</tt>    
 * <br><tt>  PlaneTangency = 5</tt>    
 * <br><tt>  PlaneNormal   = 6</tt>    
 * <br><tt>  PlaneOffset   = 7</tt>    
 * <br><tt>  PlaneOffsetPt = 8</tt>    
 * <br><tt>  PlaneAngle    = 9</tt>    
 * <br><tt>  PlaneMean     = 10</tt>
 * <br><tt>  PlaneBetween  = 11</tt>
 * <br><tt>  PlaneExplicit = 30</tt>
 */
#define CATGSMWFPlaneEquation			0
#define CATGSMWFPlaneThrg3				1
#define CATGSMWFPlaneThrg2				2
#define CATGSMWFPlane1Pt1Ln				3
#define CATGSMWFPlaneThrg1				4
#define CATGSMWFPlaneTangency			5
#define CATGSMWFPlaneNormal  			6
#define CATGSMWFPlaneOffset  			7
#define CATGSMWFPlaneOffsetPt  			8
#define CATGSMWFPlaneAngle  			9
#define CATGSMWFPlaneMean  				10
#define CATGSMWFPlaneBetween  			11
#define CATGSMWFPlaneExplicit			30

class ExportedByCATGSMUseItf CATIGSMUsePlane : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

    /**
      * Gets the plane type.
      *   @param oT 
      *      Type of Plane 
      */
 virtual HRESULT GetPlaneType(int & oT) = 0;

    /**
      * Sets the plane type.
      * @param iType
      * The new feature type
      * @param iElems
      * The list of specs to prepare for report to new feature
      * @param iReportedSpecPositionTab
      * Array containing for each feature the position in the new feature attributes structure.<br>
      * Example :  iReportedSpecPositionTab[0] = 2, <br>
      *          means that the first feature of iElems list (iElems[1]) has the second position 
      *    in the new feature, according to the replace acceptance 
      *          (a point can only be replaced by a point, for instance).<br>
      * if iReportedSpecPositionTab[i]=0 the replace for ith element could not be done.<br>
      *   Array has to be allocated by calling method.
      * @see CATIGSMUseFactory#CreatePlaneType
      */
 virtual HRESULT SetPlaneType(int iType,
        CATListValCATIMmiMechanicalFeature_var* iElems = NULL, 
        int * iReportedSpecPositionTab = NULL) = 0;
    /**
      * Gets the plane orientation.
      * <br> The plane orientation allows to reverse the plane from the reference plane.
      * <br> Note: It can only be used for offset or angle type planes.
      *   @param oOrient 
      *      orientation
      */
 virtual HRESULT GetOrientation(CATGSMOrientation & oOrient) = 0;

    /**
      * Sets the plane orientation.
      * <br> The plane orientation allows to reverse the plane from the reference plane.
      * <br> Note: It can only be used for offset or angle type planes.
      *   @param iOrient 
      *      orientation
      */
 virtual HRESULT SetOrientation(const CATGSMOrientation iOrient) = 0;

    /**
      * Inverts the plane orientation.
      * <br> Note: The plane orientation is only used for offset or angle type planes: 
      * this method is then only available on offset an angle planes.
      */
 virtual HRESULT InvertOrientation() = 0;

  /**
      * Gets the position where the plane is displayed.
      * @param oX 
      *      X coordinates 
      * @param oY 
      *      Y coordinates 
      * @param oZ 
      *      Z coordinates 
      * @return 
      * S_OK if the position has been set before, E_FAIL else.
      */
 virtual HRESULT GetPosition(double & oX, double & oY, double & oZ) = 0;

    /**
      * Sets the position where the plane is displayed.
      * @param iX 
      *      X coordinates 
      * @param iY 
      *      Y coordinates 
      * @param iZ 
      *      Z coordinates 
      */
 virtual HRESULT SetPosition(double iX, double iY, double iZ) = 0;

    /**
      * Removes reference position of a plane.
      * <br> Note: 
      * When removed, the plane is displayed at its default position.
      */
 virtual HRESULT RemovePosition() = 0;

    /**
      * Queries whether the plan is a reference plane (fixed axis plane).
      * @return 
      *   =0 when the plane is a reference plane, 1 else.
      */
 virtual int IsARefPlane() = 0;

    /**
      * Gets Position set by SetPosition method.
      * Caution: The position returned by this method may not lie on the plane.
      * Use GetPosition method if point lying on the plane is required.
      * @param oX 
      *      X coordinates 
      * @param oY 
      *      Y coordinates 
      * @param oZ 
      *      Z coordinates 
      * @return 
      * S_OK if the position has been set before, E_FAIL else.
      */
 virtual HRESULT GetPositionWithoutProjection(double & oX, double & oY, double & oZ) = 0;

};
CATDeclareHandler (CATIGSMUsePlane, CATBaseUnknown);
#endif
