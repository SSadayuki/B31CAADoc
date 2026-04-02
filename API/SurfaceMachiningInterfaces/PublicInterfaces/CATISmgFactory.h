#ifndef CATISmgFactory_H
#define CATISmgFactory_H
//=================================================================================
// COPYRIGHT DASSAULT SYSTEMES 2002
//=================================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "SmgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATSmgDefs.h"
class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySmgItfEnv IID IID_CATISmgFactory;
#else
extern "C" const IID IID_CATISmgFactory ;
#endif

/**
 * Interface to create Surface Machining entities.
 * <br><b>Role</b>: This interface has methods to create a
 * machining area and a NC geometry feature.
 * The machining area is a manufacturing feature used to used to define different zones
 * to machine (part body, checks, forbidden zone and guiding curves). 
 * The NC geometry feature is a geometrical zone pointed by several manufacturing features.
 * Query this interface on the feature container.
 * @see CATIMfgManufacturingFactories
 */

class ExportedBySmgItfEnv CATISmgFactory: public CATBaseUnknown
{
	CATDeclareInterface ;
	
	public:

/**
 * Creates a machining area. 
 * @param oMachiningArea
 *   The created machining area.
 */
	virtual HRESULT CreateMachiningArea (CATBaseUnknown_var &oMachiningArea) = 0;
	
/**
 * Creates a nc geometry feature.
 * @param iType
 *   The type of the nc geometry feature to create.
 *   <br><b>Legal values</b>: Use
 *   <dl>
 *     <dt><tt>SmgAreaType </tt> <dd> to create areas
 *     <dt><tt>SmgEdgeType </tt> <dd> to create edges
 *     <dt><tt>SmgPlaneType</tt> <dd> to create planes
 *     <dt><tt>SmgPointType</tt> <dd> to create points
 *   </dl>
 *
 * @param oGeometryFeature
 *   The created nc geometry feature.
 */
	virtual HRESULT CreateNcGeometryFeature (const CATUnicodeString &iType, CATBaseUnknown_var &oGeometryFeature) = 0; 

};

CATDeclareHandler( CATISmgFactory, CATBaseUnknown) ;

#endif
