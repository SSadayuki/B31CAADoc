/* -*-c++-*- */
#ifndef CATIGSMPoint_H
#define CATIGSMPoint_H
 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"
class CATListValCATISpecObject_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMPoint;
#else
extern "C" const IID IID_CATIGSMPoint;
#endif
/**
 * Interface to point feature. 
 * <b>Role</b>:  To set/change the type of the point.
 * Point types :<br>
 * <br><b>Legal values </b>: 
 * <br><tt>  PointCoord      = 0</tt>    
 * <br><tt>  PointOnSurf     = 1</tt>    
 * <br><tt>  PointOnCurve    = 2</tt>    
 * <br><tt>  PointPlanar     = 3</tt>    
 * <br><tt>  PointCenter     = 4</tt>    
 * <br><tt>  PointTangent    = 5</tt>    
 * <br><tt>  PointBetween    = 6</tt>    
 * <br><tt>  PointExplicit   = 30</tt>    
 */
#define CATGSMWFPointCoord				0
#define CATGSMWFPointOnSurf				1
#define CATGSMWFPointOnCurve			2
#define CATGSMWFPointPlanar				3
#define CATGSMWFPointCenter				4
#define CATGSMWFPointTangent			5
#define CATGSMWFPointBetween			6
#define CATGSMWFPointExplicit			30


class ExportedByCATGitInterfaces CATIGSMPoint : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

    /**
      * Gets the point type.
      *   @param oT 
      *      Type of point  
      */
 virtual HRESULT GetPointType(int & oT) = 0;

    /**
      * Sets the point type.
      * @param iType
      * The new feature type
      * @param iElems
      * The list of specs to prepare for report to new feature
      * @param iReportedSpecPositionTab
      * Array containing for each feature the position in the new feature attributes structure.<br>
      * Example : iReportedSpecPositionTab[0] = 2,<br>
      *          means that the first feature of iElems list (iElems[1]) has the second position<br> 
      *    in the new feature, according to the replace acceptance
      *          (a point can only be replaced by a point, for instance).<br>
      * if ReportedSpecPositionTab[i]=0 the replace for ith element could not be done.<br>
      *   Array has to be allocated by calling method.
      * @see CATIGSMFactory#CreatePointType
      */
 virtual HRESULT SetPointType(int iType,
        CATListValCATISpecObject_var* iElems = NULL, 
        int * iReportedSpecPositionTab = NULL) = 0;
};
CATDeclareHandler (CATIGSMPoint, CATBaseUnknown);
#endif
