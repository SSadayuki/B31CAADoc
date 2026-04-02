/* -*-c++-*- */
#ifndef CATIGSMPointCoord_H
#define CATIGSMPointCoord_H
// 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"
#include "CATICkeParm.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMPointCoord;
#else
extern "C" const IID IID_CATIGSMPointCoord;
#endif
/**
 * Interface to point feature defined by coordinates. 
 * <b>Role</b>: Allows you to access data of the point feature created with
 * its cartesian coordinates.
 * @see CATIGSMFactory#CreatePoint
 */
class ExportedByCATGitInterfaces CATIGSMPointCoord : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

 /**
  * Gets the X, Y, Z coordinates of the point.
  *   @param oX
  *      X coordinate
  *   @param oY
  *      Y coordinate
  *   @param oZ
  *      Z coordinate
  */
 virtual HRESULT GetCoordinates(CATICkeParm_var & oX,CATICkeParm_var & oY,CATICkeParm_var & oZ) = 0;

 /**
  * Sets the X, Y, Z coordinates of the point.
  *   @param iX
  *      X coordinate
  *   @param iY
  *      Y coordinate
  *   @param iZ
  *      Z coordinate
  */
 virtual HRESULT SetCoordinates(const CATICkeParm_var iX,const CATICkeParm_var iY,const CATICkeParm_var iZ) = 0;

 /**
  * Gets the reference point. 
  * This data is not mandatory, if Point is null, the origin point is taken.
  * @Param oRefPoint
  *     Reference point  (RefPoint = NULL_var is allowed).
  */
 virtual HRESULT GetReferencePoint(CATISpecObject_var& oRefPoint) = 0;

/**
  * Sets the reference point. 
  *    This data is not mandatory, if Point is null, the origin point is taken.
  * @Param iRefPoint
  *     Reference point  (RefPoint = NULL_var is allowed).
  */
 virtual HRESULT SetReferencePoint(const CATISpecObject_var  iRefPoint) = 0;

 /**
  * Gets the reference Axis. 
  * This data is not mandatory, if oRefAxis is null, then absolute axis system is considered as reference axis system.
  * @Param oRefAxis
  *     Reference axis (oRefAxis = NULL_var is allowed).
  */
 virtual HRESULT GetReferenceAxis(CATISpecObject_var& oRefAxis) = 0;

/**
  * Sets the reference Axis. 
  *    This data is not mandatory, if iRefAxis is null, then absolute axis system is considered as reference axis system.
  * @Param iRefAxis
  *     Reference Axis (iRefAxis = NULL_var is allowed).
  */
 virtual HRESULT SetReferenceAxis(const CATISpecObject_var  &iRefAxis) = 0;

};
CATDeclareHandler (CATIGSMPointCoord, CATBaseUnknown);
#endif
