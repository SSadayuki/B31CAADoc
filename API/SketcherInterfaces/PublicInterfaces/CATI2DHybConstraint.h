/* -*-c++-*- */
#ifndef CATI2DHybConstraint_h
#define CATI2DHybConstraint_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CAT2DCstType.h"
#include "CATSketcherInterfaces.h"
class CATListValCATBaseUnknown_var;
class CATRawCollint;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DHybConstraint;
#else
extern "C" const IID IID_CATI2DHybConstraint;
#endif

/**
 * Interface to manage a hybrid constraint.
 * <b>Role</b>: This interface is used to manage a hybrid constraint.
 * Hybrid constraints are used to constrained 2D and 3D geometries 
 * when those 3D geometries are in an other document.
 * @see CATISketchElement, CATISketchExternalReferences.
 */

class ExportedByCATSketcherInterfaces CATI2DHybConstraint : public CATBaseUnknown
{
  CATDeclareInterface;

public:
  /**
   * Returns the kind of the hybrid constraint.
   * @param <tt>CAT2DCstType *oType</tt>
   * [out] The expected 2D constraint type.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT Get2DCstType(CAT2DCstType *oType) const = 0;
  /**
   * Retrieves the constrained geometries.
   * @param <tt>CATListValCATBaseUnknown_var& oFirstGeometries</tt>
   * [out] The first geometries
   * @param <tt>CATListValCATBaseUnknown_var& oSecondGeometries</tt>
   * [out] The second geometries
   * @param <tt>CATListValCATBaseUnknown_var& oThirdGeometries</tt>
   * [out] The third geometries
   * 3D geometries must be given as CATPCurves 
   * in the absolute axis system coordinates of the sketch.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT GetElements(CATListValCATBaseUnknown_var& oFirstGeometries,
                              CATListValCATBaseUnknown_var& oSecondGeometries,
                              CATListValCATBaseUnknown_var& oThirdGeometries) const = 0;
  /**
   * Plugs the hybrid constraint in the solver.
   * The constrained 3D geometries are fixed in the dimensional system.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT AddConstraint() const = 0;

  /**
   * Analyse the hybrid constraint and returns a list of POSSIBLE
   * constraint types according to the referenced elements.
   * The returned types are defined into CAT2DCstType.h.
   * Only the logical constraint types are returned, but not the dimension types.
   *
   * Output:
   *  oCstTypes : List of possible 2D logical constraint types on the referenced elements.
   *
   */
  virtual HRESULT Analyse(CATRawCollint& oCstTypes) const = 0;
};

#endif
