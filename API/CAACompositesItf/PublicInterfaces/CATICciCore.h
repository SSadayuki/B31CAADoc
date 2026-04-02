#ifndef CATICciCore_H
#define CATICciCore_H

/**
* @CAA2Level L0
* @CAA2Usage U0
*/

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003
//==============================================================================
//
// CATICciCore :
//   Interface to manage a Core.
//
//==============================================================================
// Usage Notes :
//
//------------------------------------------------------------------------------
//  Inheritance : CATICciCore (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//==============================================================================

#include "CAACompositesItf.h"

#include "CATICciPhysicalEntity.h"
#include "CATISpecObject.h"
#include "CATIMmiMechanicalFeature.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByCAACompositesItf IID IID_CATICciCore;
#else
extern "C" const IID IID_CATICciCore;
#endif

class CATMathAxis;

/**
 * Interface to Core feature.
 * <b>Role</b>: Allows to access data of Composites core feature.
 */
class ExportedByCAACompositesItf CATICciCore : public CATICciPhysicalEntity
{
    CATDeclareInterface;

public :   
    
    /**
    * Gets the Core's engineering geometry.
    * @param oGeometry
    *    The Engineering/Manufacturing geometry (solid).
    */
    virtual HRESULT GetEngineeringGeometry(CATIMmiMechanicalFeature_var & oGeometry) = 0;

    /**
    * Sets the Geometry.
    * @param iGeometry
    *    The Engineering/Manufacturing geometry (solid).
    */
    virtual HRESULT SetGeometry( CATIMmiMechanicalFeature* iSolid ) = 0;

    /**
	* Define geometry of core as a basic variable core (solid) defined from a contour, a slope and an offset 
     * @param ispContour
     *   Base contour (feature with resulting bod ymade of a closed wire)
     * @param iSlopeAngle
     *   Angle of slope in radians
     * @param iOffset
     *   Offset in mm from base contour defining height of core solid geometry
   */
	virtual HRESULT SetGeometryFromAngle( const CATIMmiMechanicalFeature_var &ispContour, 
										  const double iSlopeAngle, 
										  const double iOffset) = 0;

    //--------------------------------------------------------------------------------------------------
    //------------------------- METHODS NOT TO BE USED: will be removed in future release --------------
    //--------------------------------------------------------------------------------------------------
	/**
    * @deprecated V5R26
    * Use @href CATICciCore#GetEngineeringGeometry(CATIMmiMechanicalFeature_var&) method instead.
    * Gets the Core's engineering geometry.
    * @param oGeometry
    *    The Engineering/Manufacturing geometry (solid).
    */
    virtual HRESULT GetEngineeringGeometry(CATISpecObject_var & oGeometry) = 0;

    /**
    * @deprecated V5R26
    * Use @href CATICciCore#SetGeometry(CATIMmiMechanicalFeature*) method instead.
    * Sets the Geometry.
    * @param iGeometry
    *    The Engineering/Manufacturing geometry (solid).
    */
    virtual HRESULT SetGeometry( CATISpecObject* iSolid ) = 0;

    /**
    * @deprecated V5R26
    * Use @href CATICciCore#SetGeometryFromAngle(CATIMmiMechanicalFeature_var&,double,double) method instead.
	* Define geometry of core as a basic variable core (solid) defined from a contour, a slope and an offset 
    * @param ispContour
    *   Base contour (feature with resulting bod ymade of a closed wire)
    * @param iSlopeAngle
    *   Angle of slope in radians
    * @param iOffset
    *   Offset in mm from base contour defining height of core solid geometry
   */
	virtual HRESULT SetGeometryFromAngle( const CATISpecObject_var &ispContour, 
										  const double iSlopeAngle, 
										  const double iOffset) = 0;
	//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
    //
    //               N O N - C A A             M E T H O D S
    //
    //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
    
	/**
    * @nodoc
    * DO NOT USE.
    * @deprecated V5R21
    * Gets the Core's manufacturing geometry.
    * @param oGeometry
    *    The manufacturing geometry (solid).
    * Use @href CATICciCore#GetEngineeringGeometry method instead.
    */
    virtual HRESULT GetManufacturingGeometry(CATISpecObject_var & oGeometry) = 0;
};

CATDeclareHandler(CATICciCore, CATICciPhysicalEntity);

#endif
