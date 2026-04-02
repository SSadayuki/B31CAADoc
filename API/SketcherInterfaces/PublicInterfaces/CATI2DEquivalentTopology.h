#ifndef CATI2DEquivalentTopology_h
#define CATI2DEquivalentTopology_h

// COPYRIGHT DASSAULT SYSTEMES 2003
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
#include "CATSketcherInterfaces.h"
class CATGeoFactory;
class CATBody;
/**
 * Access to a topological result from a sketch element
 * into a specified geometrical container.
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DEquivalentTopology;
#else
extern "C" const IID IID_CATI2DEquivalentTopology;
#endif

class ExportedByCATSketcherInterfaces CATI2DEquivalentTopology : public IUnknown
{
  CATDeclareInterface;

public: 

  /**
   * Acces to geometrical element
   *  iContainer   : Geometrical container
   *  oBody        : Topological result 
   *  oTobeDeleted : If TRUE then user has to remove the topological result after use
   */
  virtual HRESULT  GetEquivalentTopology(CATGeoFactory *iContainer, CATBody **oBody, boolean *oTobeDeleted) = 0;
};

#endif
