// COPYRIGHT Dassault Systemes 2000 

#ifndef CATAsmConstraintServices_H
#define CATAsmConstraintServices_H

#include "CATAssemblyInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATConstraintType.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATLISTV_CATICst.h"

class CATIProduct;
class CATICkeParm;
class CATICst;

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Creates a constraint.
 * @param iConstraintType
 *    <br><b>Legal values</b>:
 *    <br><tt>catCstTypeReference</tt> = Fix Constraint
 *    <br><tt>catCstTypeDistance</tt> = Offset Constraint
 *    <br><tt>catCstTypeOn</tt> = Coincidence Constraint
 *    <br><tt>catCstTypeAngle</tt> = Angle Constraint
 *    <br><tt>catCstTypePlanarAngle</tt> = Planar Angle Constraint
 *    <br><tt>catCstTypeParallelism</tt> = Parallelism Constraint
 *    <br><tt>catCstTypePerpendicularity</tt> = Perpendicularity Constraint
 *    <br><tt>catCstTypeSurfContact</tt> = Surface Contact Constraint
 *    <br><tt>catCstTypeLinContact</tt> = Line Contact Constraint
 *    <br><tt>catCstTypePoncContact</tt> = Point Contact Constraint
 *    <br><tt>catCstTypeAnnulContact</tt> = Line (Annular) Contact Constraint
 * @param iConnectorList
 *    a list of connectors referencing the geometry involved in the
 *    relation.
 * @param iCkeValue
 *    The value associated to the constraint (offset,angle...)
 * @param iReferenceProduct
 *    The product identifies the document where the constraint will be created. 
 *    This product was used when you have created the connectors involved in 
 *    this constraint.
 * @param oConstraint
 *    The resulting constraint
 */
ExportedByCATAssemblyInterfaces HRESULT CreateConstraint(
   CatConstraintType iConstraintType,
   const CATLISTV(CATBaseUnknown_var)& iConnectorList,
   CATICkeParm* iCkeValue,
   CATIProduct* iReferenceProduct,
   CATICst** ioConstraint);

/**
 * Class dedicated to Assembly Constraints services.
 */
class ExportedByCATAssemblyInterfaces CATAsmConstraintServices
{
  public:

  /**
   * Refreshes a constraint's status.
   * This method only works with the PX1 product licence.
   * @param iConstraint
   *    The constraint to refresh
   * @return
   *   <dl>
   *   <dt><tt>S_OK</tt>          <dd>if the constraint is refreshed
   *   <dt><tt>E_POINTER</tt>     <dd>if iConstraint is NULL
   *   <dt><tt>E_NOTIMPL</tt>     <dd>if the PX1 licence si not available
   *   <dt><tt>E_FAIL</tt>        <dd>elsewhere.
   *   </dl>
   */
    static HRESULT RefreshConstraint( const CATICst * iConstraint );

  /**
   * Refreshes the status of every constraint in a given product.
   * This method is not recursive: the constraints of the sub assemblies won't be refreshed.
   * This method only works with the PX1 product licence.
   * @param iProduct
   *    The product which constraints must be refreshed
   * @return
   *   <dl>
   *   <dt><tt>S_OK</tt>          <dd>if at least one constraint is refreshed
   *   <dt><tt>E_POINTER</tt>     <dd>if iProduct is NULL
   *   <dt><tt>E_NOTIMPL</tt>     <dd>if the PX1 licence si not available
   *   <dt><tt>E_FAIL</tt>        <dd>elsewhere.
   *   </dl>
   */
    static HRESULT RefreshConstraintsInProduct( const CATIProduct * iProduct );
 
    /**
    * Gets the list of constraints under a given reference product.
    * @param iProduct
    *    The product identifies the document where the constraint were created. 
    *    You can only get the constraints of a reference product.
    * @param oConstraintsList
    *    The resulting constraints list
    * @return
    *   <dl>
    *   <dt><tt>S_OK</tt>          <dd>if the product contains at least one constraint
    *   <dt><tt>E_POINTER</tt>     <dd>if iProduct is NULL
    *   <dt><tt>E_INVALIDARG</tt>  <dd>if iProduct is not a reference product
    *   <dt><tt>E_FAIL</tt>        <dd>elsewhere.
    *   </dl>
    */
    static HRESULT ListConstraints( const CATIProduct * iProduct, 
                                    CATLISTV(CATICst_var) & oConstraintsList );

    /**
    * Removes a constraint.
    * @param iCst
    *    The constraint to remove. 
    *    You can only remove a reference constraint i.e. under a reference product.
    * @return
    *   <dl>
    *   <dt><tt>S_OK</tt>          <dd>if the constraint is removed
    *   <dt><tt>E_POINTER</tt>     <dd>if iCst is NULL
    *   <dt><tt>E_INVALIDARG</tt>  <dd>if iCst is not a reference constraint
    *   <dt><tt>E_FAIL</tt>        <dd>elsewhere.
    *   </dl>
    */
    static HRESULT RemoveConstraint( const CATICst * iCst );

};


#endif
