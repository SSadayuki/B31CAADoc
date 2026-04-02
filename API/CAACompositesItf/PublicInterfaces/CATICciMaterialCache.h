// COPYRIGHT Dassault Systemes 2007
//===================================================================
//
// CATICciMaterialCache.h
// Define the CATICciMaterialCache interface
//
//===================================================================
//
// Usage notes:
//   New interface: describe its use here
//
//------------------------------------------------------------------------------
//  Inheritance : CATICciMaterialCache (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//==============================================================================
#ifndef CATICciMaterialCache_H
#define CATICciMaterialCache_H
/**
* @CAA2Level L0
* @CAA2Usage U0
*/

#include "CAACompositesItf.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesItf IID IID_CATICciMaterialCache;
#else
extern "C" const IID IID_CATICciMaterialCache ;
#endif

//------------------------------------------------------------------
class CATUnicodeString;
class CATIMaterialFeature_var;
class CATICkeParm_var;

/**
 * Interface to CacheMaterial.
 * <b>Role</b>: Allows to access data of Composites material cache feature, agregated by a Composites
 * parameter object and that exposed a link to a material feature.
 * @see CATICciCompositesParameters, CATIMaterialFeature
 */
class ExportedByCAACompositesItf CATICciMaterialCache: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

     /**
     * Gets the name of the material cache feature.
     * @param oName
     *   The material cache name.
     */
     virtual HRESULT GetName (CATUnicodeString & oName) = 0;
     
     /**
     * Gets the material of the material cache feature.
     * @param oMaterial
     *   The material feature.
     */
     virtual HRESULT GetMaterial(CATIMaterialFeature_var & oMaterial) = 0;
     
     /**
     * Gets synchonisation status of the material cache feature with linked material.
     * @param oSynchronized
     *   The synchonisation status.
     */
     virtual HRESULT IsSynchronized (CATBoolean & oSynchronized) = 0;

     /**
     * Gets the type of the the material cache feature.
     * @param oType
     *   The material cache type (Undefined, Uni-directional, Bi-directional,
     *   NCF or Non Structural).
     */
     virtual HRESULT GetType (CATUnicodeString & oType) = 0;

     /**
     * Gets the material cache cured thickness.
     * @param oMatCuredTh
     *   The cured thickness value.
     */
     virtual HRESULT GetMaterialCuredThickness (CATICkeParm_var & oMatCuredTh) = 0;
     
     /**
     * Gets the material cache uncured thickness.
     * @param oMatUncuredTh
     *   The uncured thickness value.
     */
     virtual HRESULT GetMaterialUncuredThickness (CATICkeParm_var & oMatUncuredTh) = 0;
     
     /**
     * Gets the material cache roll width.
     * @param oMatRollWidth
     *   The roll width value.
     */
     virtual HRESULT GetMaterialRollWidth(CATICkeParm_var & oMatRollWidth) = 0;
     
     /**
     * Gets the the material cache maximum deformation.
     * @param oMatMaxDefmn
     *   The maximum deformation value.
     */
     virtual HRESULT GetMaterialMaxDefmn(CATICkeParm_var & oMatMaxDefmn) = 0;
     
     /**
     * Gets the material cache limit deformation.
     * @param oMatLimDefmn
     *   The limit deformation value.
     */
     virtual HRESULT GetMaterialLimDefmn(CATICkeParm_var & oMatLimDefmn) = 0;
     
     /**
     * Gets the material cache weight per surface unit.
     * @param oMatSurMass
     *   The surfacic mass value.
     */
     virtual HRESULT GetMaterialSurMass(CATICkeParm_var & oMatSurMass) = 0;
    
     /**
     * Gets the material cache density.
     * @param oMatCompDens
     *   The density value.
     */
     virtual HRESULT GetMaterialCompDensity(CATICkeParm_var & oMatCompDens) = 0;

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

CATDeclareHandler(CATICciMaterialCache, CATBaseUnknown);
//------------------------------------------------------------------

#endif
