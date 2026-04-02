// COPYRIGHT DASSAULT SYSTEMES 2002
#ifndef CATAsmCstSetFeatContServices_h
#define CATAsmCstSetFeatContServices_h

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATAssemblyInterfaces.h"

#include "CATBooleanDef.h"

class CATIContainer_var;
class CATIProduct_var;
class CATUnicodeString;

extern ExportedByCATAssemblyInterfaces 
const CATUnicodeString CATAsmCstSetFeatCont;

//-----------------------------------------------------------------------------

/**
 * @deprecated V5R15
 *   Find or Create the container of "Constraints' Set" associated to a Product.
 * Use CATAsmConstraintSetServices methods to create or manage Constraints' Set
 * @param iProduct
 *   The product containing the constraints to group
 * @param iCreate
 *    creation mode:
 *    <br><b>Legal values</b>:
 *    <br><tt>FALSE</tt> = if the container doesn't yet exist, don't force the creation
 *    <br><tt>TRUE</tt>  = if the container doesn't yet exist, create it
*/
//-----------------------------------------------------------------------------
ExportedByCATAssemblyInterfaces 
CATIContainer_var CATAsmCstSetFeatGetCont(const CATIProduct_var& iProduct,
                                          boolean iCreate);


#endif
