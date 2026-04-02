#ifndef CATIMfgToolAssembly3DVisuCustom_H
#define CATIMfgToolAssembly3DVisuCustom_H

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003
//=============================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

// module
#include "MfgItfEnv.h"

// inheritance
#include "CATBaseUnknown.h"

// forward declarations
class CATMathPoint;
class CATMathVector;
class CAT3DBagRep;
class CATRep;

// OLE iid
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgToolAssembly3DVisuCustom;
#else
extern "C" const IID IID_CATIMfgToolAssembly3DVisuCustom ;
#endif

/**   
 * Interface dedicated to tool assembly objects 3D visualization.
 * <b>Role</b>: This interface offers services to manage the tool assemblies objects.
 * visualization in 3D mode.
 * @see CATIMfgToolAssembly
 * @see CATI3DGeoVisu
 */

class ExportedByMfgItfEnv CATIMfgToolAssembly3DVisuCustom : public CATBaseUnknown
{
    CATDeclareInterface;
    
public:
    
    /**
     * Builds the Tool Assembly object representation.
     * @return
     *  The representation of the tool assembly or NULL if failed
     */
    virtual CATRep* BuildRep() = 0;

    /**
     * Sets the Tool Assembly visu location.
     * Describe the Tool Tip point and the Tool axis on which the 
     * representation should be displayed.
     * @param iTipPoint : CATMathPoint representing the Tool Tip point
     * @param iAxis     : CATMathVector representing the Tool axis (spindle axis of the machine for lathe)
     * @param iBagRep   : Representation bag on which is applied the transformation
     * @param ipRadial  : Optional CATMathVector representing the radial axis of the machine for lathe
     * @return
     *   S_OK when the method succeeds, and E_FAIL otherwise
     */
    virtual HRESULT SetLocation(const CATMathPoint& iTipPoint,
                                const CATMathVector& iAxis,
                                CAT3DBagRep* iBagRep,
                                const CATMathVector* ipRadial = NULL) = 0;

    // No constructors or destructors on this pure virtual base class
    // --------------------------------------------------------------
};

CATDeclareHandler(CATIMfgToolAssembly3DVisuCustom, CATBaseUnknown);
#endif
