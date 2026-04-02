//===================================================================
// COPYRIGHT DASSAULT SYSTEMES 2004
//===================================================================
//
// CATIMfgMultiAxisIsoparametricMachining.h
//
//===================================================================

#ifndef CATIMfgMultiAxisIsoparametricMachining_H
#define CATIMfgMultiAxisIsoparametricMachining_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "SmgItfEnv.h"
#include "CATBaseUnknown.h"

#include "CATTopDefine.h"
#include "CATLISTV_CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySmgItfEnv IID IID_CATIMfgMultiAxisIsoparametricMachining;
#else
extern "C" const IID IID_CATIMfgMultiAxisIsoparametricMachining ;
#endif

/**
 * Interface for multi axis isoparametric machining operations.
 */
class ExportedBySmgItfEnv CATIMfgMultiAxisIsoparametricMachining: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Adds check geometry to the operation.
 * @param iReference
 *   The geometric element to set.
 *
 * @param iProduct
 *   The associated product of the referenced geometry.
 *
 * @param iPosition
 *   The position where to set the geometry in the geometry list (optional). 
 *   If not set, iReference is added at the end of the list.
 *
 * @return
 *    <dl>
 *      <dt><tt>S_OK</tt>    <dd>if the method succeeds
 *      <dt><tt>E_FAIL</tt>  <dd>if iReference is not valid
 *    </dl>
 */
   virtual HRESULT SetChecksGeometries (const CATBaseUnknown_var& iReference, const CATBaseUnknown_var& iProduct, const int iPosition=0)=0;

/**
 * Removes all check elements from the operation.
 * @return
 *    <dl>
 *      <dt><tt>S_OK</tt>    <dd>if the method succeeds
 *    </dl>
 */
   virtual HRESULT RemoveChecksGeometries ()=0;

/**
 * Adds part geometry to the operation.
 * <br>Part faces must be sorted from the first to machine to the last one.
 * <br>Parts must be defined inside a belt without forks.
 * @param iReference
 *   The geometric element to set.
 *
 * @param iProduct
 *   The associated product of the referenced geometry.
 *
 * @param iPosition
 *   The position where to set the geometry in the geometry list (optional). 
 *   If not set, iReference is added at the end of the list.
 *
 * @return
 *    <dl>
 *      <dt><tt>S_OK</tt>    <dd>if the method succeeds
 *      <dt><tt>E_FAIL</tt>  <dd>if iReference is not valid
 *    </dl>
 */
   virtual HRESULT SetPartsGeometries (const CATBaseUnknown_var& iReference, const CATBaseUnknown_var& iProduct, const int iPosition=0)=0;

/**
 * Removes all part elements from the operation.
 * @return
 *    <dl>
 *      <dt><tt>S_OK</tt>    <dd>if the method succeeds
 *    </dl>
 */
   virtual HRESULT RemovePartsGeometries ()=0;

/**
 * Modifies the orientation of the part with regards to its geometry.
 * <br>The system will automatically initialize the 'Side to mill' arrow based on orientation stored on first Face provided as Part element.
 * This orientation stored on CATCell itself is naturally defined outer the material in case of solid faces but stays unpredictable in case of wireframe surfaces.
 * @param iNewOrientation
 *   The new relative orientation.
 * @return
 *    <dl>
 *      <dt><tt>S_OK</tt>    <dd>if the method succeeds
 *    </dl>
 */
   virtual HRESULT SetPartsOrientation(const int iBelt, CATOrientation iNewOrientation)=0;

/**
 * Retrieves the number of belts from part elements.
 * @param oNumberOfBelts
 *   The number of belts.
 * @return
 *    <dl>
 *      <dt><tt>S_OK</tt>    <dd>if the method succeeds
 *    </dl>
*/
   virtual HRESULT GetGeometricBeltsNumber (int& oNumberOfBelts)=0;

/**
 * Sets the transition corners for all belts.
 * Four corners must be defined for each belt, sorted with the following rule :
 * <br>  - from corner 1 (start of first path)
 * <br>  - thru corner 2 (end of first path)
 * <br>  - thru corner 3 (start of last path)
 * <br>  - to corner 4 (end of last path)
 * <br>Corners must belong to the BRep elements previously provided as Parts.
 * @param iListOfCorners
 *   The list of corners to go from a belt to another (CATVertex elements).
 * @return
 *    <dl>
 *      <dt><tt>S_OK</tt>    <dd>if the method succeeds
 *      <dt><tt>E_FAIL</tt>  <dd>if iListOfCorners is not valid or if part elements are not defined.
 *    </dl>
 */   
   virtual HRESULT SetTransitionCorners (const CATListValCATBaseUnknown_var& iListOfCorners, const CATListValCATBaseUnknown_var& iListOfProducts)=0;

};

CATDeclareHandler(CATIMfgMultiAxisIsoparametricMachining, CATBaseUnknown) ;

#endif
