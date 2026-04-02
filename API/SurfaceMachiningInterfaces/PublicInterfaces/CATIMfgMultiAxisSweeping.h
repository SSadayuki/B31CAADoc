//===================================================================
// COPYRIGHT DASSAULT SYSTEMES 2004
//===================================================================
//
// CATIMfgMultiAxisSweeping.h
//
//===================================================================

#ifndef CATIMfgMultiAxisSweeping_H
#define CATIMfgMultiAxisSweeping_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "SmgItfEnv.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySmgItfEnv IID IID_CATIMfgMultiAxisSweeping;
#else
extern "C" const IID IID_CATIMfgMultiAxisSweeping ;
#endif

/**
 * Interface for multi axis sweeping operations.
 */

class ExportedBySmgItfEnv CATIMfgMultiAxisSweeping: public CATBaseUnknown
{
    CATDeclareInterface;

    public:

/**
 * Sets 'View Direction' geometry to the operation.
 * <br> Usually the part surface normal is used as the view direction.
 * @param iReference
 *   The geometric element to set.
 *
 * @param iProduct
 *   The associated product of the referenced geometry.
 *
 * @return
 *    <dl>
 *      <dt><tt>S_OK</tt>    <dd>if the method succeeds
 *      <dt><tt>E_FAIL</tt>  <dd>if iReference is not valid
 *    </dl>
 */
    virtual HRESULT SetViewDirectionGeometry(const CATBaseUnknown_var & iReference, const CATBaseUnknown_var & iProduct) =0;
 
/**
 * Removes 'View Direction' geometry from the operation.
 * @return
 *    <dl>
 *      <dt><tt>S_OK</tt>    <dd>if the method succeeds
 *    </dl>
 */
    virtual HRESULT RemoveViewDirectionGeometry() =0;

/**
 * Sets 'Start Direction' geometry to the operation.
 * <br> The view and the start directions define a guiding plane : machining is done in planes parallel to the guiding plane.
 * @param iReference
 *   The geometric element to set.
 *
 * @param iProduct
 *   The associated product of the referenced geometry.
 *
 * @return
 *    <dl>
 *      <dt><tt>S_OK</tt>    <dd>if the method succeeds
 *      <dt><tt>E_FAIL</tt>  <dd>if iReference is not valid
 *    </dl>
 */
    virtual HRESULT SetStartDirectionGeometry(const CATBaseUnknown_var & iReference, const CATBaseUnknown_var & iProduct) =0;
     
/**
 * Removes 'Start Direction' geometry from the operation.
 * @return
 *    <dl>
 *      <dt><tt>S_OK</tt>    <dd>if the method succeeds
 *    </dl>
 */
    virtual HRESULT RemoveStartDirectionGeometry() =0;

/**
 * Sets the machining direction of the operation.
 * @param iSide
 *   <br><b>Legal values</b>:
 *   <dl>
 *     <dt><tt>-1</tt>  <dd> Left regards to the guiding plane 
 *     <dt><tt>1</tt>   <dd> Right regards to the guiding plane
 *   </dl>
 *
 * @return
 *    <dl>
 *      <dt><tt>S_OK</tt>    <dd>if the method succeeds
 *      <dt><tt>E_FAIL</tt>  <dd>if iSide is not valid
 *    </dl>
 */
    virtual HRESULT SetMachiningDirection(const int iSide) =0;


};

CATDeclareHandler( CATIMfgMultiAxisSweeping, CATBaseUnknown) ;

#endif
