// COPYRIGHT DASSAULT SYSTEMES 2002
//=============================================================================
// class CATExtIGeomVisuChildren 
//=============================================================================
// adapter for CATIVisuChildren adhesion
// for GeometricalElement3D and derivated types
//=============================================================================

#ifndef CATExtIGeomVisuChildren_h
#define CATExtIGeomVisuChildren_h

// L1 U2
/**
* @CAA2Level L0
* @CAA2Usage U0
*/

#include "CATMechanicalModelerUI.h"
#include "CATExtIVisuChildren.h"
#include "CATUnicodeString.h"
#include "CATMfViewDefs.h"

class CATListValCATBaseUnknown_var;

/**
*  Adapter class.
*  <b>Role :</b>
*  default implementation for CATIVisuChildren interface, for late type GeometricalElement3D
*  and derivated types.
*/
class ExportedByCATMechanicalModelerUI CATExtIGeomVisuChildren : public CATExtIVisuChildren
{
  CATDeclareClass;
  
public:

  CATExtIGeomVisuChildren();  
  virtual ~CATExtIGeomVisuChildren();

  /**
  * <br><b>Role : </b>.
  * Retrieves the list of children constraints and parameters whose representations 
  * have to be aggregated under the representation of the gemetrical element.
  * @param oConstraints : list of children constraints 
  * @param iViewContext : view context.
  */
  virtual HRESULT GetAggregatedConstraintsAndParameters(CATListValCATBaseUnknown_var** oConstraints,
                                                        const CATUnicodeString& iView = MfDefault3DView);
private:

   // NOT implemented, to prevent default
  CATExtIGeomVisuChildren(const CATExtIGeomVisuChildren&);
  CATExtIGeomVisuChildren& operator=(const CATExtIGeomVisuChildren&);
};

#endif
