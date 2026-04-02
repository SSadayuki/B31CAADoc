#ifndef CATIMf3DBehavior_H
#define CATIMf3DBehavior_H

// COPYRIGHT DASSAULT SYSTEMES 1999
/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */
#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef E_MISSING_PARENT
#define E_MISSING_PARENT             _HRESULT_TYPEDEF_(0xCFF80002L)
#endif

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMf3DBehavior;
#else
extern "C" const IID IID_CATIMf3DBehavior;
#endif

//-----------------------------------------------------------------------------
/**
 * Interface characterizing the mechanical modeler behaviors of geometrical features.
 * 
 * <br><b>Role</b>: The geometrical features (i.e. the features derivating of
 * <tt>GeometricalElement3D</tt> startup) can be distinguished by the topological
 * dimension of their associated topology but, according to mechanical modeler,
 * the differences between behaviors are not directly based on this topological
 * dimension criterion. They are two categories, defining the way features are
 * managed by generic commands (insertion, deletion, copy, ...), which are:
 * <p><du><li><b>Solid features</b> (see @href #IsASolid method)
 * <br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
 * Geometric features generating volume topology (see @href CATLump and @href CATVolume ).
 * <br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
 * Located only in solid sets and solid and surface sets.
 * <br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
 * Inserted in the specification tree using specific process (see @href CATIPrtProceduralView ).
 * <br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
 * Implicit link to the preceding feature in the specification tree, modifying and hidding it.</li></p>
 * <p><li><b>Surface features</b> (see @href #IsAShape method)
 * <br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
 * Geometric features generating any kind of topology (volume, surface or wireframe).
 * <br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
 * Located (if no specific restriction) in surface sets (geometrical set and
 * ordered geometrical sets) and solid and surface set.</li></du></p>
 *
 * <p>The surface feature category contains a sub-category, the volume features, 
 * which is a restriction to features generating volume topology (see @href CATIMf3DBehavior2 ).</p>
 *
 * <p>A feature can not belong to both categories. Therefore the methods @href #IsASolid
 * and @href #IsAShape must return different results.</p>
 * 
 * <p>Beyond these two categories, there's another category, not exclusive of the
 * two preceding one, which is the category of <b>datum features</b> (see @href
 * #IsADatum method). The datum property applies to features without any link to
 * other features, except internal or external references, affected by the
 * "not up-to-date" mechanism. In other words datum features are not specification
 * features but only copies, static or dynamic, of others geometrical features.</p>
 *
 * <p>The behavior of a feature may not be fixed by its late type. For instance,
 * a same geometric feature (startup) may be used for both solid or surface designs
 * and therefore the methods of this interface must return variable results depending
 * on the using context of the feature instance.</p>
 *
 * <p><b>Implementation:</b> For every startup deriving from <tt>GeometricalElement3D</tt>,
 * it is essential to reimplement this interface to avoid hazardous behaviors.</p>
 */
class ExportedByMecModItfCPP CATIMf3DBehavior : public CATBaseUnknown
{
  CATDeclareInterface;
  public:

/**
 * Indicates whether a feature is a solid feature.
 * @return
 *   <b>Legal values:</b>
 *   <dl><dt><tt>S_OK</tt></dt><dd>The feature is a solid feature.</dd>
 *   <dt><tt>E_FAIL</tt></dt><dd>The feature is not a solid feature.</dd>
 *   <dt><tt>E_MISSING_PARENT</tt></dt><dd>It is impossible to know if the feature is a solid feature because its type is based on its parent's type but the feature has no parent.</dd></dl>
 */
  virtual HRESULT IsASolid() const  = 0; 

/**
 * Indicates whether a feature is a surface feature.
 * @return
 *   <b>Legal values:</b>
 *   <dl><dt><tt>S_OK</tt></dt><dd>The feature is a surface feature.</dd>
 *   <dt><tt>E_FAIL</tt></dt><dd>The feature is not a surface feature.</dd>
 *   <dt><tt>E_MISSING_PARENT</tt></dt><dd>It is impossible to know if the feature is a surface feature because its type is based on its parent's type but the feature has no parent.</dd></dl>
 */
  virtual HRESULT IsAShape() const  = 0; 	
  
/** 
 * Indicates whether a feature is a datum feature.
 * <br><b>Role:</b> Determines whether datum property (see above) applies to the feature.
 * There no link between this property and the fact that the feature is a solid
 * feature or a surface feature.
 * @return
 *   <b>Legal values:</b>
 *   <dl><dt><tt>S_OK</tt></dt><dd>The feature is a datum feature.</dd>
 *   <dt><tt>E_FAIL</tt></dt><dd>The feature is not a datum feature.</dd>
 *   <dt><tt>E_MISSING_PARENT</tt></dt><dd>It is impossible to know if the feature is a datum feature because its type is based on its parent's type but the feature has no parent.</dd></dl>
 */
  virtual HRESULT IsADatum() const = 0; 
};

CATDeclareHandler(CATIMf3DBehavior,CATBaseUnknown);

#endif
