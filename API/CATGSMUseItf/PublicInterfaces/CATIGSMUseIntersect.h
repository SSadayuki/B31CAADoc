/* -*-c++-*- */
#ifndef CATIGSMUseIntersect_H
#define CATIGSMUseIntersect_H
// 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"
#include "CATIMmiMechanicalFeature.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUseIntersect;
#else
extern "C" const IID IID_CATIGSMUseIntersect;
#endif
/**
 * Interface to intersection feature.
 * <b>Role</b>: Allows you to gets or/and sets the definition elements of  an intersection : two curves, planes, surfaces or solids.
 * @see CATIGSMUseFactory#CreateIntersect
 */
class ExportedByCATGSMUseItf CATIGSMUseIntersect : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

  /**
   * Gets the first element to intersect.
   *   @param oElem1
   *      new first element to intersect
   */ 
 virtual    HRESULT GetFirstElem (CATIMmiMechanicalFeature_var & oElem1) = 0;
  /**
   * Gets the second element to intersect.
   *   @param oElem2
   *      new second element to intersect
   */ 
 virtual    HRESULT GetSecondElem (CATIMmiMechanicalFeature_var & oElem2) = 0;

       /**
  * Sets the first element to intersect.
  *   @param iElem1
  *      new first element to intersect
  */
 virtual    HRESULT SetFirstElem (const CATIMmiMechanicalFeature_var iElem1) = 0;
       /**
  * Sets the second element to intersect.
  *   @param iElem2
  *      new second element to intersect
  */
 virtual    HRESULT SetSecondElem (const CATIMmiMechanicalFeature_var iElem1) = 0;

 
 /**
  * Sets the type of solution for curve/curve intersection. If FALSE, all the intersections
  * are computed. If TRUE, only point intersection are computed.
  *   @param iBool
  *      intersection type for wires
  */
 virtual    HRESULT SetPointType (const int iBool = FALSE) = 0;
 /**
  * Sets the type of solution for curve/curve intersection. If FALSE, all the intersections
  * are computed. If TRUE, only point intersection are computed.
  *   @param oBool
  *      intersection type for wires
  */
 virtual    HRESULT GetPointType (int &oBool) = 0;


  /**
   * Gets the Plane Only mode.
   *   @param oSolid
   *      intersection type for solids
   */
  virtual HRESULT GetSolidMode(CATBoolean & oSolid) = 0;

  /**
   * Sets the Plane Only mode. 
   *   @param iSolid
   *      intersection type for solids
   */ 
  virtual HRESULT SetSolidMode(CATBoolean iSolid) = 0;

  //surface intersection extrapolation
  /**
  * Gets the Extrapolation mode.
  *   @param oValue
  *      flag for extrapolating intersection trace for surface-surface intersections 
  */
  virtual    HRESULT GetExtrapolateMode (CATBoolean & oValue) = 0;

  /**
  * Sets the Extrapolation mode.
  *   @param iValue
  *      flag for extrapolating intersection trace for surface-surface intersections  
  */
  virtual    HRESULT SetExtrapolateMode  (const CATBoolean iValue) = 0;

  //surface intersection extrapolation options
  /**
  * Gets the Extrapolate On option.
  *   @param oValue
  */
  virtual    HRESULT GetExtrapolateOnMode(int & oValue) = 0;

  /**
  * Sets the Extrapolate On option.
  *   @param iValue
  */
  virtual    HRESULT SetExtrapolateOnMode(const int iValue) = 0;

  //intersection of non secant line segments
  /**
  * Gets the Intersect mode.
  *   @param oValue
  *      flag for intersection of non secant line segments
  */
  virtual    HRESULT GetIntersectMode (CATBoolean & oValue) = 0;

  /**
  * Sets the Intersect mode.
  *   @param iValue
  *      flag for intersection of non secant line segments
  */
  virtual    HRESULT SetIntersectMode  (const CATBoolean iValue) = 0;

  /**
   * Return True if the resulting element is unexpected.
   * <br> (A line instead of a point for example)
   *   @param oIsWarning
   */
  virtual HRESULT IsWarningIntersect(CATBoolean & oIsWarning) = 0;

  /**
  * Gets the Extend mode.
  * @param oValue
  */
  virtual    HRESULT GetExtendLinearSupport (int & oValue)= 0;

  /**
  * Sets the Extend mode.
  * @param iValue
  */
  virtual    HRESULT SetExtendLinearSupport (const int iValue) = 0;

};
CATDeclareHandler (CATIGSMUseIntersect, CATBaseUnknown);
#endif // CATIGSMUseIntersect_H
