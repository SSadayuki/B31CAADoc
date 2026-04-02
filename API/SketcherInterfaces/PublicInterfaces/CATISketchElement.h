/* -*-c++-*- */
#ifndef CATISketchElement_h
#define CATISketchElement_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATSketcherInterfaces.h"

/**
 * Interface of sketch elements.
 * <b>Role</b>: This interface is used to determine the sketch father of
 * 2D elements (geometric elements or constraints).
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATISketchElement;
#else
extern "C" const IID IID_CATISketchElement;
#endif

class ExportedByCATSketcherInterfaces CATISketchElement : public CATBaseUnknown
{
  CATDeclareInterface;

public: 
  /**
   * Returns the sketch that contains the element.
   * @param <tt>iIID</tt>
   * [in] The interface identifier for which a pointer is requested.
   * @param oObject
   * [out] The address where the returned pointer to the interface is located.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT GetSketch(const IID &iIID,CATBaseUnknown **oObject) = 0;
};

CATDeclareHandler(CATISketchElement,CATBaseUnknown);

#endif
