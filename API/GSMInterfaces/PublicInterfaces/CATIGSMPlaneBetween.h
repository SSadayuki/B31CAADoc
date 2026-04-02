/* -*-c++-*- */
#ifndef CATIGSMPlaneBetween_H
#define CATIGSMPlaneBetween_H
// 
// COPYRIGHT DASSAULT SYSTEMES 2017

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATBaseUnknown.h"
#include "CATICkeParm.h"
#include "CATGSMOrientation.h"
#include "CATISpecObject.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID IID_CATIGSMPlaneBetween;
#else
extern "C" const IID IID_CATIGSMPlaneBetween;
#endif
/**
 * Interface to Plane Between feature. 
 * <b>Role</b>: Allows you to access data of the plane feature created between two planes or planar surfaces
 */
class ExportedByCATGitInterfaces CATIGSMPlaneBetween : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

 /**
 * Gets the first input plane or planar surface.
 * @param oElem1
 * first input element
 */
 virtual HRESULT GetFirstElement(CATISpecObject_var& oElem1) = 0;

 /**
 * Sets the first input plane or planar surface.
 * @param iElem1
 * first input element
 */
 virtual HRESULT SetFirstElement(const CATISpecObject_var& iElem1) = 0;


 /**
 * Gets the second input plane or planar surface.
 * @param oElem2
 * second input element
 */
 virtual HRESULT GetSecondElement(CATISpecObject_var& oElem2) = 0;
 
 /**
 * Sets the second input plane or planar surface.
 * @param iElem2
 * second input element
 */
 virtual HRESULT SetSecondElement(const CATISpecObject_var& iElem2) = 0;


 /**
  * Gets the Ratio.
  * @Param oRatio
  * This is the ratio in which distance or angle between two input elements is divided by Plane Between feature
  * If Ratio is equal to NULL_var, the extremity defined by Orientation parameter is taken
  */
 virtual HRESULT GetRatio(CATICkeParm_var& oRatio) = 0;

 /**
  * Sets the Ratio.
  * @Param iRatio
  * This is the ratio in which distance or angle between two input elements is divided by Plane Between feature
  * If Ratio is equal to NULL_var, the extremity defined by Orientation parameter is taken
  */
 virtual HRESULT SetRatio(const CATICkeParm_var& iRatio) = 0; 


 /**
  * Gets the orientation.
  * @Param oOrientation 
  * Orientation = CATGSMInvertOrientation means that distance or angle is measured from the second element
  */
 virtual HRESULT GetOrientation(CATGSMOrientation& oOrientation) = 0;
 
 /**
  * Sets the orientation.
  * @Param iOrientation 
  * Orientation = CATGSMInvertOrientation means that distance or angle is measured from the second element
  */
 virtual HRESULT SetOrientation(const CATGSMOrientation& iOrientation) = 0;

};

CATDeclareHandler (CATIGSMPlaneBetween, CATBaseUnknown);
#endif

