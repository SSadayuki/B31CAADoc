#ifndef CATIMf3DBehavior2_H
#define CATIMf3DBehavior2_H

// COPYRIGHT Dassault Systemes 2003
/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATMf3DBehavior2Adapter
 */

#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef E_MISSING_PARENT
#define E_MISSING_PARENT             _HRESULT_TYPEDEF_(0xCFF80002L)
#endif

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMf3DBehavior2;
#else
extern "C" const IID IID_CATIMf3DBehavior2;
#endif

/**
 * Interface extending CATIMf3DBehavior.
 * <br><b>Role</b>: The @href CATIMf3DBehavior interface introduced the two 
 * categories of geometrical features which are solid features and
 * surface features. CATIMf3DBehavior2 introduces a sub-category of surface features
 * which is the category of volume features.</p>
 * <p>The volume features behave,
 * in terms of mechanical modeler functionnalities (insertion, deletion,
 * reordering, display, ...), as the surface features. The main differences
 * between volumes and surface are the associated topological body which
 * topological dimension is 3 (considering only this aspect, volume features
 * are similar to solid features), the geometric operations that can be
 * applied to and the associated visual representations (icons, 3D reps).</p>
 *
 * <p><b>Implementation:</b> A default implementation exists for <tt>GeometricalElement3D</tt>
 * startup, for which the method @href #IsAVolume returns <tt>E_FAIL</tt>.
 * For every startup deriving from <tt>GeometricalElement3D</tt> being 
 * a surface feature and generating volume topology, it is essential to reimplement
 * this interface.</p>
 *
 * <p><b>BOA information</b>: this interface CAN be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */
class ExportedByMecModItfCPP CATIMf3DBehavior2: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

   /**
     * Tells whether the feature is a volume feature.
     * <br><b>Role:</b>  Tells whether the feature is a volume feature. A volume
     * feature is a sub-kind of surface feature  and therefore if the method
     * @href #IsAVolume returns <tt>S_OK</tt>, the method @href 
     * CATIMf3DBehavior#IsAShape invoked on the same feature must also
     * return <tt>S_OK</tt>.
     * @return
     *   <b>Legal values</b>:
     *   <dl><dt><tt>S_OK</tt></dt> <dd>The feature is a volume feature.</dd>
     *   <dt><tt>E_FAIL</tt></dt> <dd>The feature is not a volume feature. It can nevertheless be a surface feature.</dd>
     *   <dt><tt>E_MISSING_PARENT</tt></dt><dd>It is impossible to know if the feature is a volume feature because its type is based on its parent's type but the feature has no parent.</dd></dl></dl>
     */

     virtual HRESULT IsAVolume() const = 0; 
};

CATDeclareHandler(CATIMf3DBehavior2,CATBaseUnknown);

#endif
