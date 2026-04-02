// COPYRIGHT Dassault Systemes 20004
#ifndef CATAsmConstraintSetServices_H
#define CATAsmConstraintSetServices_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATAssemblyInterfaces.h"

#include "CATIAsmCstSetFeature.h" // default value NULL_var
#include "CATBoolean.h"

class CATIProduct_var;

/**
 * Class dedicated to Assembly Constraints' Sets creation and management.
 */
class ExportedByCATAssemblyInterfaces CATAsmConstraintSetServices
{
  public:


    /**
     * Gets the Root Set associated to the given product
     * (corresponding to the Constraints' Node).
     * @param iProduct
     *    The product holding the constraints.
     * @param oCstSetRoot
     *    the set root.
     * @param iCreate
     *  creation mode:
     *  <br><b>Legal values</b>:
     *  <br><tt>FALSE</tt> = if the root set doesn't yet exist, don't force the creation
     *  <br><tt>TRUE</tt>  = if the root set doesn't yet exist, create it
     * @return
     *    Error code of function.
     */
    static HRESULT GetRootSet( const CATIProduct_var & iProduct,
                               CATIAsmCstSetFeature_var & oCstSetRoot,
                               CATBoolean iCreate );


    /**
     * Adds a new set child to an existing set.
     *   @param iParentSet
     *      The set which will hold the created child
     *   @param oNewSetChild
     *      the new created set child
     *   @param iPreviousSet
     *      the new set will appear after this previous set.
     *      default value NULL_var: the new set will appear at the end of the parent set
     *   @return
     *      Error code of function.
     */
    static HRESULT AddNewSetChild(const CATIAsmCstSetFeature_var & iParentSet,
                                        CATIAsmCstSetFeature_var & oNewSetChild,
                                  const CATIAsmCstSetFeature_var & iPreviousSet = NULL_var );

};


#endif
