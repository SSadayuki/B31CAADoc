/* -*-c++-*- */
#ifndef CATIGSMUsePolyline_H
#define CATIGSMUsePolyline_H
//
// COPYRIGHT Dassault Systemes 2001

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

//
// CATIGSMUsePolyline.h
// Define the CATIGSMUsePolyline interface
//

#include "CATGSMUseItfExportedBy.h"
#include "CATBaseUnknown.h"
#include "CATIMmiMechanicalFeature.h"
#include "CATLISTV_CATIMmiMechanicalFeature.h"
#include "CATICkeParm.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUsePolyline;
#else
extern "C" const IID IID_CATIGSMUsePolyline;
#endif

/**
 * Interface to line corner feature.
 * <b>Role</b>:Allows to access data of the line corner 
 * @see CATIGSMUseFactory#CreatePolyline
 */
class ExportedByCATGSMUseItf CATIGSMUsePolyline: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Inserts a point.
 * @param iPosition 
 *   The position of the point the list of points. 
 * @param iPoint
 *   the point. 
 */ 
      virtual HRESULT InsertElement(const CATIMmiMechanicalFeature_var iPoint
         , const int iPosition
         ) = 0;

/**
 * Replaces a point.
 * @param iPosition 
 *   The position of the point in the list of points. 
 * @param iPoint
 *   the point. 
 */ 
      virtual HRESULT ReplaceElement(const CATIMmiMechanicalFeature_var iPoint
         , const int iPosition
         ) = 0;

/**
 * Removes a point from the feature.
 * @param iPosition 
 *   The position of the point in the list of points. 
 */ 
      virtual HRESULT RemoveElement(const int iPosition) = 0;

/**
 * Gets the list of points.
 * @param oPoints
 *   The list of points.
 */ 
      virtual HRESULT GetElements(CATLISTV(CATIMmiMechanicalFeature_var) & oPoints,
								  CATCkeListOf(Parm) &  ioRadii) = 0 ;

/**
 * Sets a radius.
 * @param iPosition 
 *   The position of the radius in the list of radius. 
 * @param iRadius
 *   the radius. 
 */ 
      virtual HRESULT SetRadius(const int iPosition
         , const CATICkeParm_var iRadius
         ) = 0;

/**
 * Gets a radius.
 * @param iPosition 
 *   The position of the radius in the list of radius. 
 * @param oRadius
 *   the radius. 
 */ 
      virtual HRESULT GetRadius(const int iPosition
         , CATICkeParm_var & oRadius
         ) = 0;

/**
 * Sets the support of the line corner curve.
 * @param iSupport
 *   The support to be added.
 *   If no iSupport is provided, remove the support.
      virtual HRESULT SetSupport(const CATIMmiMechanicalFeature_var iSupport = NULL_var ) = 0;  
 */

/**
 * Gets the support of the line corner curve.
 * @param oSupport
 *   The support.
      virtual HRESULT GetSupport(CATIMmiMechanicalFeature_var & oSupport ) = 0;
 */

	  
/**
 * Sets the closure state.
 *   @param iClosed
 *      <br>: FALSE   means that the Polyline is opened
 *      <br>: TRUE    means that the Polyline is closed
 */
      virtual HRESULT SetClosure(const CATBoolean iClosed) = 0;

/**
 * Gets the closure state.
 *   @param oClosed
 *      <br>: FALSE   means that the Polyline is opened
 *      <br>: TRUE    means that the Polyline is closed
 */
      virtual HRESULT GetClosure(CATBoolean & oClosed) = 0;

/**
 * Sets a point.
 * @param iPosition 
 *   The position of the point in the list of points.
 * @param iPoint
 *   the point. 
 */ 
	  virtual HRESULT SetPoint(const int iPosition, const CATIMmiMechanicalFeature_var iPoint) = 0;

/**
 * Checks Number of radii.
 *   @param iMode:
 *      =1   Analyze
 *           Returns E_FAIL if Number of radii is greater than number of points.
 *      =2   Clean the feature
 *           Deletes radii not associated to a Polyline point.
 */
      virtual HRESULT CheckNumberOfRadii(const int iMode=1) = 0;

};
CATDeclareHandler (CATIGSMUsePolyline, CATBaseUnknown);

//------------------------------------------------------------------

#endif
