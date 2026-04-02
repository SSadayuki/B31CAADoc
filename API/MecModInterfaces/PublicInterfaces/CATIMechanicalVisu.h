#ifndef CATIMechanicalVisu_h
#define CATIMechanicalVisu_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMechanicalVisu;
#else
extern "C" const IID IID_CATIMechanicalVisu;
#endif


/**
 * Interface to set the visualization status of mechanical features.
 * <b>Role</b>: The visualization status is a mechanical status that is used
 * on mechanical bodies to make them appear in the specification tree and in the geometry.
 * This flag is internal to the mechanical modeler.
 */
class ExportedByMecModItfCPP CATIMechanicalVisu : public CATBaseUnknown
{
  CATDeclareInterface;

 public:
  /**
   * Sets the visualization status.
   * @param iStatus
   * The visualization status.
   * <br><b>Legal values</b>: 1 if visible, 0 otherwise
   */
  virtual void SetVisuStatus(const int& iStatus) = 0;

  /**
   * Returns the visualization status.
   * @return
   * <br><b>Legal values</b>: 1 if visible, 0 otherwise
   */
  virtual int GetVisuStatus() = 0;

  /**
   * Returns the visualization status.
   * @return
   * <br><b>Legal values</b>: 0 if visible, 1 otherwise
   */
  virtual int GetHideStatus() = 0;

  /**
   * Sets the visualization status.
   * @param iStatus
   * The visualziation status.
   * <br><b>Legal values</b>: 0 if visible, 1 otherwise
   */
  virtual void SetHideStatus(const int& iStatus) = 0;
    
  /**
   * Returns the effective visibility in 3D view.
    * <br><b>Role:</b>This method takes into account both the local show / no show status of the object, 
   * and the status of its hierarchy when needed.
   * @return
   * <br><b>Legal values</b>: S_OK if visible, S_FALSE if not, E_UNEXPECTED if determination fails,
   * E_FAIL means excluded from graph and 3D visu in CATPart document
   * (for a Mechanical/GSM Tool, "VisuOnOff" attribute was set to 1,
   *  for a GeometricalElement3D, it is agregated by such a tool)
   */
  virtual HRESULT Is3DVisible() = 0;

};

CATDeclareHandler(CATIMechanicalVisu,CATBaseUnknown);

#endif
