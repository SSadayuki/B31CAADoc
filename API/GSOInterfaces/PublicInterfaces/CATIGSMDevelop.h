/* -*-c++-*- */
#ifndef CATIGSMDevelop_H
#define CATIGSMDevelop_H
// 
// COPYRIGHT DASSAULT SYSTEMES 1997

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

//
// CATIGSMDevelop.h 
// Define the  CATIGSMDevelop interface
// 

#include "ExportedByCATGotInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATGSMPositionTransfoDef.h"
#include "CATGSMDevelopDef.h"

class CATICkeParm_var;
class CATISpecObject_var;
class CATIGSMDirection_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGotInterfaces IID IID_CATIGSMDevelop;
#else
extern "C" const IID IID_CATIGSMDevelop;
#endif
/**
 * Interface to develop feature.
 * <b>Role</b>:Allows to access data of the Develop feature created by using 
 * a wire, a revolution surface and positioning parameters.
 * @see CATIGSOFactory#CreateDevelop
 */
class ExportedByCATGotInterfaces CATIGSMDevelop : public CATBaseUnknown
{

	CATDeclareInterface;

public: 
   /**
    * Gets the develop method mode.
    *   @param oElem
    *      CATGSMDevelopMethod_DevDev or CATGSMDevelopMethod_DevProj
    */
	virtual HRESULT GetMode(enum CATGSMDevelopMethod & oElem) = 0;
   /**
    * Sets the develop method mode.
    *   @param iElem
    *      CATGSMDevelopMethod_DevDev or CATGSMDevelopMethod_DevProj
    */
	virtual HRESULT SetMode(const enum CATGSMDevelopMethod iElem) = 0;

   /**
    * Gets the planar wire element to be developed.
    *   @param oElem
    *      Planar wire feature
    */
	virtual HRESULT GetWireToDevelop(CATISpecObject_var & oElem) = 0;
   /**
    * Sets the planar wire element to be developed.
    *   @param iElem
    *      Planar wire feature
    */
	virtual HRESULT SetWireToDevelop(const CATISpecObject_var iElem) = 0;

   /**
    * Gets the plane feature that MAY be given explicitly.
    *   @param oElem
    *      Plane feature, NULL_var if not given explicitly
    */
	virtual HRESULT GetWirePlane(CATISpecObject_var & oElem) = 0;
   /**
    * Sets the plane feature that MAY be given explicitly.
    *   @param iElem
    *      Plane feature
    */
	virtual HRESULT SetWirePlane(const CATISpecObject_var iElem) = 0;

   /**
    * Gets the positioning transformation.
    * <br> It allows to get the user positioned planar wire axis. 
    * <br> The result of this feature is the planar wire, positioned in the support-linked axis.
    *   @param oElem
    *      Positioning transformation feature (or positioned wire)
    */
	virtual HRESULT GetPositionedWire(CATISpecObject_var & oElem) = 0;
   /**
    * Sets the positioning transformation.
    *   @param iElem
    *      Positioning transformation feature
    *   @return 
    *      S_OK if OK, E_FAIL if failure
    */
	virtual HRESULT SetPositionedWire(const CATISpecObject_var iElem) = 0;

   /**
    * Gets the positioning mode.
    *   @param oElem
    *      CATGSMPositionMode_Develop if a positioning operation is operated,
    *      CATGSMPositionMode_NoneOrPositioned if not
    */
	virtual HRESULT GetPosMode(enum CATGSMPositionMode & oElem) = 0;
   /**
    * Sets the positioning mode.
    *   @param iElem
    *      CATGSMPositionMode_Develop if a positioning operation is operated,
    *      CATGSMPositionMode_NoneOrPositioned if not
    */
	virtual HRESULT SetPosMode(const enum CATGSMPositionMode iElem) = 0;

   /**
    * Gets the revolution surface on which to develop.
    *   @param oElem
    *      Revolution surface feature
    */
	virtual HRESULT GetSupport(CATISpecObject_var & oElem) = 0;
   /**
    * Sets the revolution surface on which to develop.
    *   @param iElem
    *      Revolution surface feature
    */
	virtual HRESULT SetSupport(const CATISpecObject_var iElem) = 0;

   /**
    * Gets the radiantness literal feature.
    *   @param oElem
    *      Radiantness literal feature
    */
	virtual HRESULT GetRadiantness(CATICkeParm_var & oElem) = 0;
   /**
    * Sets the radiantness literal feature.
    *   @param iElem
    *      Radiantness literal feature
    */
	virtual HRESULT SetRadiantness(const CATICkeParm_var iElem) = 0;

   /**
    * Gets the inclination literal feature.
    *   @param oElem
    *      Inclination literal feature
    */
	virtual HRESULT GetInclination(CATICkeParm_var & oElem) = 0;
   /**
    * Sets the inclination literal feature.
    *   @param iElem
    *      Inclination literal feature
    */
	virtual HRESULT SetInclination(const CATICkeParm_var iElem) = 0;

   /**
    * Gets the Radius literal feature.
    *   @param oElem
    *      Radius literal feature
    */
	virtual HRESULT GetRadius(CATICkeParm_var & oElem) = 0;
   /**
    * Sets the Radius literal feature.
    *   @param iElem
    *      Radius literal feature
    */
	virtual HRESULT SetRadius(const CATICkeParm_var iElem) = 0;

   /**
    * Gets the positioning parameter : plane axis origin.
    * <br> The plane is the one on which lies the wire to be developed.
    *   @param oElem
    *      Origin feature
    */
	virtual HRESULT GetPlaneAxisOrigin(CATISpecObject_var & oElem) = 0;
   /**
    * Sets the positioning parameter : plane axis origin.
    * <br> The plane is the one on which lies the wire to be developed.
    *   @param iElem
    *      Origin feature
    */
	virtual HRESULT SetPlaneAxisOrigin(const CATISpecObject_var iElem) = 0;

   /**
    * Gets the positioning parameter: plane axis direction.
    * <br> The plane is the one on which lies the wire to be developed.
    * <br> The direction is the one that the X axis follows. 
    * <br> The Y axis direction is given by the vector product of the Z
    * axis of the default computed axis system and the present direction.
    *   @param oElem
    *      Direction feature
    */
	virtual HRESULT GetPlaneAxisDirection(CATIGSMDirection_var & oElem) = 0;
   /**
    * Sets the positioning parameter : plane axis direction.
    * <br> The plane is the one on which lies the wire to be developed.
    * <br> The direction is the one that the X axis follows. 
    * <br> The Y axis direction is given by the vector product of the Z
    * axis of the default computed axis system and the present direction.
    *   @param iElem
    *      Direction feature
    */
	virtual HRESULT SetPlaneAxisDirection(const CATIGSMDirection_var iElem) = 0;

   /**
    * Gets the numerical positioning parameters.
    * <br> It corresponds to the two coordinates of the new origin in the default plane axis system.
    *   @param oElem
    *      Numerical parameter (literal feature)
    *   @param oI
    *      Index of the parameter (1 or 2)
    */
	virtual HRESULT GetPlaneAxisCoord(CATICkeParm_var & oElem, const int iI) = 0;
   /**
    * Sets the numerical positioning coordinates parameters. 
    * <br> It corresponds to the two coordinates of the new origin in the default plane axis system.
    *   @param iElem
    *      Numerical parameter (literal feature)
    *   @param iI
    *      Index of the parameter (1 or 2)
    */
	virtual HRESULT	SetPlaneAxisCoord(const CATICkeParm_var iElem, const int iI) = 0;
   /**
    * Sets the numerical positioning coordinates parameters.
    * <br> It corresponds to the two coordinates of the new origin in the default plane axis system.
    *   @param iElem
    *      Numerical value
    *   @param iI
    *      Index of the parameter (1 or 2)
    */
	virtual HRESULT	SetPlaneAxisCoord(const double iElem, const int iI) = 0;

   /**
    * Gets the numerical positioning angle parameter. 
    * <br> It corresponds to the angle from the default position of the X axis.
    *   @param oElem
    *      Numerical parameter (literal feature)
    */
	virtual HRESULT GetPlaneAxisAngle(CATICkeParm_var & oElem) = 0;
   /**
    * Sets the numerical positioning angle parameter. 
    * <br> It corresponds to the angle from the default position of the X axis.
    *   @param iElem
    *      Numerical parameter (literal feature)
    */
	virtual HRESULT	SetPlaneAxisAngle(const CATICkeParm_var iElem) = 0;
   /**
    * Sets the numerical positioning angle parameter. 
    * <br> It corresponds to the angle from the default position of the X axis.
    *   @param iElem
    *      Numerical value
    */
	virtual HRESULT	SetPlaneAxisAngle(const double iElem) = 0;

   /**
    * Gets the positioning parameter : axes inversion from previous definition.
    *   @param oI
    *      State of axes :
    *       <BR>- CATGSMAxisInversionMode_None : no axis inverted
    *       <BR>- CATGSMAxisInversionMode_X : only X axis inverted
    *       <BR>- CATGSMAxisInversionMode_Y : only Y axis inverted
    *       <BR>- CATGSMAxisInversionMode_Both : both axes inverted
    */
	virtual HRESULT GetPlaneAxisSwapAxes(enum CATGSMAxisInversionMode & oI) = 0;
   /**
    * Sets the positioning parameter : axes inversion from previous definition.
    *   @param iI
    *      State of axes :
    *       <BR>- CATGSMAxisInversionMode_None : no axis inverted
    *       <BR>- CATGSMAxisInversionMode_X : only X axis inverted
    *       <BR>- CATGSMAxisInversionMode_Y : only Y axis inverted
    *       <BR>- CATGSMAxisInversionMode_Both : both axes inverted
    */
	virtual HRESULT SetPlaneAxisSwapAxes(const enum CATGSMAxisInversionMode iI) = 0;

   /**
    * Gets the point on the revolution surface.
    * <br> It corresponds to the origin of the axis on this surface.
    *   @param oElem
    *      Point on surface feature
    */
	virtual HRESULT GetPointOnSupport(CATISpecObject_var & oElem) = 0;
   /**
    * Sets the point on the revolution surface.
    * <br> It corresponds to the origin of the axis on this surface.
    *   @param iElem
    *      Point on surface feature
    */
	virtual HRESULT SetPointOnSupport(const CATISpecObject_var iElem) = 0;

   /**
    * Gets the surface orientation used for develop computation.
    * <br> Note: to be use for build purposes.
    * <br> It is automatically set to 2 when creating a develop.
    * <br> Then, at the first evaluation, it is set to 1 (support surface
    * orientation) or 0 (opposite support surface orientation) depending
    * on algorithm recommendation : given the point on the support, the
    * orientation is taken 'external'.
    * <br> Once set, it is not supposed to change ever. This has been implemented to garantee stability.
    * <br> Note: to be use for build purposes.
    *   @param Elem
    *      0 (support surface orientation), 1 (opposite) or 2 (unset)
    */
	virtual HRESULT GetOrientation(int & oOri) = 0;
   /**
    * Sets the surface orientation used for develop computation. 
    * <br> Note: to be use for build purposes.
    *   @param iOri
    *      0 (support surface orientation), 1 (opposite) or 2 (unset)
    */
	virtual HRESULT SetOrientation(const int iOri) = 0;

};
CATDeclareHandler (CATIGSMDevelop, CATBaseUnknown);
#endif // CATIGSMDevelop_H
