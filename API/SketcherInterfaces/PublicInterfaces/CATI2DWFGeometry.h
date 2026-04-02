/* -*-c++-*- */
#ifndef CATI2DWFGeometry_h
#define CATI2DWFGeometry_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATISketch.h"
#include "CATLISTV_CATI2DWFGeometry.h"
#include "CATBoolean.h"

/**
 * Interface of 2D Geometry for sketch elements.
 * <b>Role</b>: This interface is used to determine geometric elements that belongs
 * to a sketch.
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DWFGeometry;
#else
extern "C" const IID IID_CATI2DWFGeometry;
#endif

class ExportedByCATSketcherInterfaces CATI2DWFGeometry : public CATBaseUnknown
{
  CATDeclareInterface;

public:
  /**
   * @nodoc
   */
  virtual CATISketch_var GetSketch() = 0;

  /**
   * @nodoc
   */
  virtual void Erase() = 0;

  /**
   * @nodoc
   */
  virtual CATI2DWFGeometry_var Duplicate() = 0;

  /**
   * Returns the family of the geometric element.
   * @param <tt>CATLISTV(CATI2DWFGeometry_var) oGeoms</tt>
   * [out] The list of handlers corresponding to the expected family. The method does not reset
   * the list before adding entities.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT GetFamily(CATListValCATI2DWFGeometry_var& oGeoms) = 0;

  /**
   * To known if the geometry was created during the current sketch edition.
   * The request must be done during the sketch edition (before the sketch edition is closed).
   * Outside the sketch edition, the method will return E_FAIL.
   * @param <tt>CATBoolean *oStatus</tt>
   * [out] TRUE if the geometry was created.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT WasCreated(CATBoolean *oStatus) const = 0;

  /**
   * To known if the geometry was modified or created during the current sketch edition.
   * The request must be done during the sketch edition (before the sketch edition is closed).
   * Outside the sketch edition, the method will return E_FAIL.
   * @param <tt>CATBoolean *oStatus</tt>
   * [out] TRUE if the geometry was modified or created.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT WasModified(CATBoolean *oStatus) const = 0;
};

CATDeclareHandler(CATI2DWFGeometry,CATBaseUnknown);

#endif
