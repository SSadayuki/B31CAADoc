/* -*-c++-*- */
#ifndef CATIGSMPlaneMean_H
#define CATIGSMPlaneMean_H
// 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMPlaneMean;
#else
extern "C" const IID IID_CATIGSMPlaneMean;
#endif
/**
 * Interface to plane feature defined a set of points. 
 * <b>Role</b>: Allows you to access to input point features 
 * @see CATIGSMFactory#CreatePlane
 */
class ExportedByCATGitInterfaces CATIGSMPlaneMean : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

 /**
 * Adds a point to the mean plane.
 *   @param iPoint
 *      new point 
 */
 virtual HRESULT Add(const CATISpecObject_var iPoint) = 0;

 /**
 * Gets the position of an element in the list.
 *   @param iPoint
 *      point 
 *   @param oPos
 *      position of point 
 */
 virtual HRESULT GetPosition(const CATISpecObject_var iPoint,int & oPos) = 0;
 /**
 * Gets the point which is at the given position.
 *   @param oPoint
 *      point 
 *   @param iPos
 *      position of point 
 */
 virtual HRESULT GetPointAtPosition(CATISpecObject_var & oPoint,int iPos) = 0;

 /**
 * Removes the points at the given position.
 *   @param iPos
 *      position of point 
 */
 virtual HRESULT RemovePointAtPosition(int iPos) = 0;

 /**
 * Removes all elements in the list of points.
 */
 virtual HRESULT RemoveAll() = 0;

 /**
 * Replaces a point in the list at the given position.
 *   @param oPoint
 *      point 
 *   @param iPos
 *      position of point 
 */
 virtual HRESULT ReplacePointAtPosition(CATISpecObject_var & oPoint,int iPos) = 0;

 /**
 * Gets the size of the list (number of points).
 *   @param oSize 
 *      position of point 
 */
 virtual HRESULT GetSize(int & oSize) = 0;

/**
 * Gets all the points of the list. 
 *  @param oElems
 *      List of the points
 */
 virtual HRESULT GetAllElements(CATLISTV(CATISpecObject_var) & oElems)=0;
};
CATDeclareHandler (CATIGSMPlaneMean, CATBaseUnknown);
#endif
