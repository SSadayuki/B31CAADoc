/* -*-c++-*- */
#ifndef CATI2DFixTogether_h
#define CATI2DFixTogether_h

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATSketcherInterfaces.h"
class CATListValCATI2DWFGeometry_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DFixTogether;
#else
extern "C" const IID IID_CATI2DFixTogether;
#endif

/**
 * Interface to Fix Together feature.
 * <b>Role</b>: Allows you to access data of the Fix Together Constraint feature. 
 * It is a collection of geometry that is treated as though it were rigidly constrained,
 * even though it may have few (if any) constraints or dimensions
 * Get, set the Geometrical elements inside the Fix Together.
 * @see CATI2DWFFactory#FixTogether
 */

class ExportedByCATSketcherInterfaces CATI2DFixTogether : public CATBaseUnknown
{
  CATDeclareInterface;

public:

  /**
   * Gets the geometries inside of Fix Together Constraint.
   * @param <tt>io2DGeoms</tt>
   * [out] List of geometries.
   */ 
  virtual HRESULT GetGeometries(CATListValCATI2DWFGeometry_var& io2DGeoms) = 0;

  /**
   * Sets the geometries inside of Fix Together Constraint.
   * @param <tt>io2DGeoms</tt>
   * [in/out] List of geometries.
   * @param <tt>iOperation</tt>
   * [in] Add or Remove geometries to the set
   * <dl>
   * <dt> <tt> -1 </tt> <dd> Remove the geometries with its dependencies
   * <dt> <tt>  0 </tt> <dd> Remove the geometries without its dependencies
   * <dt> <tt>  1 </tt> <dd> Add the geometries with its dependencies
   * <dt> <tt>  2 </tt> <dd> Add the geometries without its dependencies
   * </dl>
   */ 
  virtual HRESULT SetGeometries(CATListValCATI2DWFGeometry_var& io2DGeoms, 
                                const int                       iOperation) = 0;

};
#endif
