#ifndef CATIPrtCenterCurve_H
#define CATIPrtCenterCurve_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATBaseUnknown.h>

class CATISpecObject_var;
class CATGeometry_var;
class CATBody_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIPrtCenterCurve;
#else
extern "C" const IID IID_CATIPrtCenterCurve;
#endif

/**
 * Interface which provides a center curve  management behavior to a feature center curve.
 * <b>Role</b>: Some features contain a center curve component which allows users to 
 * define and use a center curve. The center curve internal feature is managed through 
 * this interface.
 */

class ExportedByPartItf CATIPrtCenterCurve : public CATBaseUnknown
{
  CATDeclareInterface;
  
public:
  
/**
* Set a new element to the specifications of the center curve. 
* <br><b>Role</b>: If there is already an element it is replaced 
* @param ihElt
*   The new element.
  */
  virtual void SetElement(const CATISpecObject_var& ihElt) = 0;
  
  /**
  * Gets the specificaton element of the center curve.
  * @param ohElt
  *   The required element.
  */
  virtual void GetElement(CATISpecObject_var& ohElt) const = 0;
  
  /**
  * Gets the geometrical support of the center curve.
  * @param ohGeom
  *   The returned support.
  */
  virtual void GetGeomSupport(CATGeometry_var& ohGeom) const = 0;
  
  /**
  * Gets the topological body corresponding to the center curve.
  * @param ohBody
  *   The returned body.
  */
  virtual void GetBody(CATBody_var& ohBody) const = 0;
  
  /**
  * @nodoc
  */
  virtual int TestValidity(int Context, int& ErrorType) const = 0;
};

CATDeclareHandler (CATIPrtCenterCurve, CATBaseUnknown); 

#endif // CATIPrtCenterCurve_H
