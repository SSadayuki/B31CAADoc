#ifndef CATICharacteristicGeomElem_h
#define CATICharacteristicGeomElem_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "CATBaseUnknown.h"
#include "CATMathDirection.h"
#include "CATMathPoint.h"

#include "MecModItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATICharacteristicGeomElem;
#else
extern "C" const IID IID_CATICharacteristicGeomElem;
#endif

/**
 * Interface to get basic geometrical knowledge of the element.
 * <b>Role</b>: This interface allows users to retrieve:
 * <br><ul><li>a feature anchor point,
 * <li>a feature reference normal.</ul>
 */
class ExportedByMecModItfCPP CATICharacteristicGeomElem : public CATBaseUnknown
{
  CATDeclareInterface;

public:
/**
 * Retrieves the feature anchor point.
 * @param oAnchorPoint
 *  The feature anchor point.
 */
  virtual HRESULT GetAnchorPoint(CATMathPoint& oAnchorPoint) const = 0 ;

/**
 * Retrieves the feature reference normal.
 * @param oRefNormal
 *  The feature reference normal.
 */
  virtual HRESULT GetReferenceNormal(CATMathDirection& oRefNormal) const = 0 ;
  
};

CATDeclareHandler(CATICharacteristicGeomElem, CATBaseUnknown);

#endif
