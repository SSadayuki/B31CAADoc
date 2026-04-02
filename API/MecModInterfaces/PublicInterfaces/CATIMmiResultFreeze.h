/* -*-c++-*- */
// -------------------------------------------------------------------
// COPYRIGHT DASSAULT SYSTEMES 2006

#ifndef CATIMmiResultFreeze_H
#define CATIMmiResultFreeze_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMmiResultFreeze;
#else
extern "C" const IID IID_CATIMmiResultFreeze ;
#endif

//----------------------------------------------------------------------------
/**
 * Interface to freeze an element of the CATPart. 
 * <br><b>Role</b>: This interface allows to freeze a feature.
 * <br> The geometrical result of a frozen feature is no more recomputed during update operation.
 * <br> A feature obtained by a copy/paste as result with link operation inside the same CATPart can be frozen.
*  On this feature, freeze do the same thing  as the deactivate command.
 * <br> An external reference cannot be frozen.
 */
//----------------------------------------------------------------------------
class ExportedByMecModItfCPP CATIMmiResultFreeze: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Freeze the feature.
     * @return
     *   <br><code>S_OK</code> if the feature is frozen.
     *   <br><code>S_FALSE</code> if the feature is already frozen.
     *   <br><code>E_FAIL</code> if the feature cannot be frozen.
     */
    virtual HRESULT Freeze()= 0;
    /**
     * Unfreeze the feature.
     * @return
     *   <br><code>S_OK</code> if the feature is unfrozen.
     *   <br><code>S_FALSE</code> if the feature is already unfrozen.
     *   <br><code>E_FAIL</code> if the feature cannot be unfrozen.
     */
    virtual HRESULT Unfreeze()= 0;
    /**
    * Tell if the feature is frozen.
    *   <br><code>CATTrue</code> if the feature is frozen.
    *   <br><code>CATFalse</code> if the feature is not frozen.
    */
    virtual CATBoolean IsFrozen()= 0;
};

CATDeclareHandler(CATIMmiResultFreeze,CATBaseUnknown);

#endif
