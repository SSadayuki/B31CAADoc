#ifndef CATIMechanicalProperties_h
#define CATIMechanicalProperties_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "CATBaseUnknown.h"
#include "MecModItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMechanicalProperties;
#else
extern "C" const IID IID_CATIMechanicalProperties;
#endif

/**
 * Interface to manage the build activation of a GeometricalElement feature.
 * <b>Role</b>: This interface enables you to deactivate a GeometricalElement feature 
 * ( @href CATIGeometricalElement ) during an update. It provides the functionality given by 
 * the Activate/Deactivate commmand in the contextual menu of a geometrical feature.
 * <p>Caution, for those which implement the <tt>CATIBuild</tt> interface on a new CAA mechanical feature. 
 * If this feature is a:
 *  <ul>
 *  <li><b>Solid</b> feature: so deriving from MechanicalFormFeature or MechanicalContextualFeature:</li> 
 *   <p>If the feature is deactivated, the @href CATIBuild#Build method is not called.</p>
 *  <li><b>Surfacic</b> feature: so deriving from GSMGeom or GeometricalElement3D : </li>
 * 
 *  <p>If the feature is deactivated, the @href CATIBuild#Build method is called. 
 * You should take into account of the 
 * activation flag into the <tt>build</tt> method implementation. Refer to the CAA encyclopedia 
 * for details about the @href CATIBuild implementation. </p>
 * 
 * </ul>
 * <p>This interface is already implemented on the MechanicalFormFeature, the MechanicalContextualFeature and the GSMGeom StartUps,
 * if you implement this interface on your CAA feature, does it only for a StartUp deriving from GeometricalElement3D.</p>
 */
class ExportedByMecModItfCPP CATIMechanicalProperties : public CATBaseUnknown
{
  CATDeclareInterface;

public:
  /**
   * Returns the activation status of a geometrical feature.
   * <br> <b>Legal values</b>:
   * <ul><li> &nbsp;<b>1</b> the feature is deactivated
   * <li> &nbsp;<b>0</b> the feature is activated.</ul>
   */
  virtual int IsInactive() const =0;

  /**
   * Activates a geometrical feature.
   */
  virtual void Activate() =0;

  /**
   * Deactivates a geometrical feature.
   */
  virtual void InActivate() =0;
};

CATDeclareHandler(CATIMechanicalProperties,CATBaseUnknown);

#endif
