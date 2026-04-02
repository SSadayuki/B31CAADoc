#ifndef CATI2DEquivalentGeometry_h
#define CATI2DEquivalentGeometry_h

// COPYRIGHT DASSAULT SYSTEMES 1999
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
#include "CATSketcherInterfaces.h"
class CATListPtrCATGeometry;
class CATGeoFactory;
class CATGeometry;
/**
 * Access to result geometry from a sketch element.
 * into a specified geometrical container
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DEquivalentGeometry;
#else
extern "C" const IID IID_CATI2DEquivalentGeometry;
#endif

class ExportedByCATSketcherInterfaces CATI2DEquivalentGeometry : public IUnknown
{
  CATDeclareInterface;

public: 

  /**
  * Acces to geometrical element
  *  iContainer   : Container of the result 
  *  oListOfObjectObject      : list of result geometry 
  *  oTobeDeleted : if TRUE then user has to remove the geometrical element
  */
  virtual HRESULT  GetEquivalentGeometry(CATGeoFactory* iContainer,CATListPtrCATGeometry& oListOfObject,boolean* oTobeDeleted)= 0;

  /**
  * @nodoc
  */

  virtual HRESULT  GetEquivalentGeometry(CATGeoFactory* iContainer,CATGeometry** oObject,boolean* oTobeDeleted)= 0;
};


#endif
