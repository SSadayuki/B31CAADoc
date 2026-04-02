/* -*-c++-*- */
// -------------------------------------------------------------------
// COPYRIGHT DASSAULT SYSTEMES 2004

#ifndef CATIMmiTemporaryVisProperties_h
#define CATIMmiTemporaryVisProperties_h

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATIVisProperties.h"
#include "CATBoolean.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMmiTemporaryVisProperties;
#else
extern "C" const IID IID_CATIMmiTemporaryVisProperties;
#endif


/**
* Interface to apply temporary graphic properties.
* <p><br><b>Role</b>: This interface enables to overload temporarily the graphic attributes of a component, 
* and to visualize them in the 3D representation. This interface is implemented on 2D surface objects of 
* selection (subelements - implementing @href CATIRSur - of solid, surface and volume features). 
* The permanent (i.e persistent) graphic attributes are the ones specified by CATIVisProperties interface.
* Supplied graphic properties are the ones defined for <tt>CATVisGeomType</tt> <tt>'CATVPMesh'</tt>.</p>
* <p>In principle, overloading takes place inside a command. After using SetTemporaryVisProperties, calling 
* ResetTemporaryVisProperties before the end of the command is mandatory. Permanent graphic attributes must be
* restored before switching to another command.</p>
* <p>In both methods, 3D visualization refresh of the resulting graphic properties is included : do not 
* send any refresh event by yourself. If temporary properties are applied to a surface, their visualization overrides
* the one of the persistent properties.</p>
* <p>Using this interface will not make your document dirty : temporary properties cannot be saved ; 
* they do not modify the persistent properties applied using <tt>CATIVisProperties</tt>.</p>
*/
class ExportedByMecModItfCPP CATIMmiTemporaryVisProperties : public CATBaseUnknown
{
  CATDeclareInterface;

public:
  
  /** 
  * Applies temporary graphic properties, and refreshes 3D visualization.
  * <p><br><b>Role</b>: This method applies temporary graphic properties to an object, and refreshes 3D visualization with respect to 
  * these properties.</p>
  * <p>To use this method, create an object of selection on the surface that is to modify (using the @href CATBRepDecode method in CATMfBRepDecode).
  * The surface cells matching the object of selection in the visualized geometry are computed, and their represented   
  * graphic properties are refreshed taking into account the temporary properties.</p>
  * <p><br>For example, to change a color : 
  * <pe>
  * <br>int red, green, blue; 
  * <br>CATVisPropertiesValues color; 
  * <br>color.SetColor(red, green, blue);
  * <br>object of selection -> SetTemporaryVisProperties(color, CATVPColor, CATVPMesh);
  * </pe></p>
  * @param iValues [in]
  *   The temporary graphic properties.
  * @param iPropertyType [in]
  *   The property type.
  *   <br> The supported types for this method are : <tt>CATVPColor</tt>, <tt>CATVPOpacity</tt>, <tt>CATVPAllPropertyType</tt>.
  * @param iGeomType [in]
  *   The geometry type. 
  *   <br> The only supported type for this method is : <tt>CATVPMesh</tt>
  * @return
  *   <br><code>S_OK</code> if temporary graphic properties could be applied
  *   <br><code>E_INVALIDARG</code> : bad argument.
  *   <br><code>E_FAIL</code> otherwise.
  */
  virtual HRESULT SetTemporaryVisProperties(CATVisPropertiesValues& iValues, CATVisPropertyType iPropertyType, CATVisGeomType iGeomType) = 0;
  
  /** 
  * Erases temporary graphic properties, and restores the 3D visualization.
  * <p><br><b>Role</b>: Call this method on <b>each</b> object of selection for which temporary graphic properties 
  * have been applied using SetTemporaryVisProperties. Be careful there must <b>always</b> be <b>as many calls</b> to  
  * ResetTemporaryVisProperties as there have been to SetTemporaryVisProperties, whatever the iGlobalReset value.</p>
  * @param iGlobalReset [in]
  *   Defines how the visualization refresh is computed.
  *   <br>Use mode TRUE especially when several objects of selection get reset (for instance when leaving a command).
  *   Choosing between FALSE and TRUE is a question of CPU time performances : 
  *   <ul>
  *   <li>FALSE</li>
  *   <br>the surface cells matching the object of selection in the visualized geometry are computed, 
  *   and their represented graphic properties get refreshed one by one.
  *   <li>TRUE</li>
  *   <br>the graphic properties of the whole geometry to which the surfaces belong are recomputed.
  *   </ul>
  *   <br>When many objects of selection are involved, solving each of them in the represented geometry
  *   can be more time consuming than reapplying the graphic properties on the whole representation. 
  *   Note that visualization gets refreshed by sending events, which are bufferized and optimized : if several 
  *   events get sent involving the same object, only one will eventually be treated.
  * @return
  *   <br><code>S_OK</code> if temporary graphic properties had been applied on the corresponding surface subelements, and could be reset
  *   <br><code>E_FAIL</code> otherwise
  */
  virtual HRESULT ResetTemporaryVisProperties(CATBoolean iGlobalReset = FALSE) = 0;
  
};

CATDeclareHandler(CATIMmiTemporaryVisProperties, CATBaseUnknown);

#endif
