#ifndef CATIMfGeom_h
#define CATIMfGeom_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATMfBRepDefs.h"
#include "CATMfBRepInternalDefs.h"


class CATGeometry_var;
class CATListValCATBaseUnknown_var;
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMfGeom;
#else
extern "C" const IID IID_CATIMfGeom;
#endif


/**
 * Interface to retrieve the geometry of a feature.
 * <b>Role</b>: This interface retrieves the geometry of a feature as defined in the geometrical modeler.
 */
class ExportedByMecModItfCPP CATIMfGeom : public CATBaseUnknown
{
  CATDeclareInterface;
  public:

/**
 * @nodoc.
 */
  virtual CATGeometry_var GetCATGeometry() = 0;


/**
 * Retrieves a list of geometries associated with the current feature.
 * @param oGeometries
 * The associated geometries.
 * @param iDim
 * The Topo dimension of Geometries result
 *  MfDDGeometry  : default geometry 
 *  Mf3DGeometry  : 3d geometry
 *  Mf2DGeometry  : 2d geometry 
*/
//  virtual void GetGeometries(CATListValCATBaseUnknown_var *oGeometries,const CATMfDimensionGeometryMode iDim) = 0;

/**
 * Retrieves a list of geometries associated with the current feature.
 * @param oGeometries
 * The associated geometries of default dimension.
*/
 virtual void GetCATGeometry(CATListValCATBaseUnknown_var *oGeometries) = 0;
};

CATDeclareHandler( CATIMfGeom, CATBaseUnknown ) ;


#endif


