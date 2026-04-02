#ifndef CATIEwrUipBundleSegment_H
#define CATIEwrUipBundleSegment_H

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

// module declaration
#include "ExportedByCATEwrInterfaces.h"

// inherited from
#include "CATBaseUnknown.h"

// forward declaration
//class CATListOfDouble;
#include "CATListOfDouble.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATEwrInterfaces IID IID_CATIEwrUipBundleSegment;
#else
extern "C" const IID IID_CATIEwrUipBundleSegment ;
#endif


/**
 * Interface to manage bundle segment diameter.
 * <b>Role<b/>:Returns the value of bundle segment diameter (in mm) fonction
 *             of the values of the diameters of wires contained in it (in mm)
 */
class ExportedByCATEwrInterfaces CATIEwrUipBundleSegment: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Returns the value of a bundle segment diameter (in mm).
     *  
     * @param iWireDiameters
     *   The list of the diameters of the wires contained in the bundle segment
     *   (the diameters are expressed in mm)
     * @param oBundleSegmentDiameter
     *   The value of the bundle segment diameter 
     *   (the diameter is expressed in mm)
     */
     virtual HRESULT ComputeDiameter (const CATListOfDouble iWireDiameters, double & oBundleSegmentDiameter) = 0;

    /**
     * Returns the value of bundle segment bend radius (in mm).
     *  
     * @param iWireBendRadius
     *   The list of the bend radius of the wires contained in the bundle segment
     *   (the bend radius are expressed in mm)
     * @param oBundleSegmentBendRadius
     *   The value of the bundle segment bend radius
     *   (the value is expressed in mm)
     */

     virtual HRESULT ComputeBendRadius (const CATListOfDouble iWireBendRadius, double & oBundleSegmentBendRadius) = 0;

};


#endif
