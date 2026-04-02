#ifndef CATIMfgResource3DVisu_H
#define CATIMfgResource3DVisu_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  2005
//=============================================================================
// Jan. 05   Creation                                                       OLC
//=============================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// module
#include "MfgItfEnv.h"

// inheritance
#include "CATI3DGeoVisu.h"

// forwards
class CATMathPoint;
class CATMathVector;
class CAT3DBagRep;

// OLE iid
#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgResource3DVisu ;
#else
extern "C" const IID IID_CATIMfgResource3DVisu ;
#endif

/**
 * Interface dedicated to Machining Resource objects 3D Visualization (Tool, Insert, Tool Assembly).
 * <b>Role</b>: This interface offers services to manage mainly the resources visualization in 3D mode.<br>
 * 
 * @see CATI3DGeoVisu
 */
class ExportedByMfgItfEnv CATIMfgResource3DVisu : public CATI3DGeoVisu
{
  CATDeclareInterface;

  public:
    /**
     * Set the Resource Visu location.
     * Describe the Resource Tip Point and the Resource Axis on which the 
     * Representation should be displayed :
     * returns HRESULT.
     * @param iTipPoint : CATMathPoint representing the Resource Tip Point
     * @param iAxis     : CATMathVector reprensenting the Resource Axis (tool axis for mill/drill or spindle axis of the machine for turning)
     * @param BagRep    : Representation Bag on which is applied the transformation
     * @param pRadial   : Optional CATMathVector representing the radial axis of the machine for turning
     *  </dl>
     */
    virtual HRESULT  SetLocation (const CATMathPoint    &iTipPoint,
                                  const CATMathVector   &iAxis,
                                  CAT3DBagRep           *BagRep,
                                  const CATMathVector   *pRadial=NULL)=0;
};
CATDeclareHandler(CATIMfgResource3DVisu, CATBaseUnknown);
#endif
