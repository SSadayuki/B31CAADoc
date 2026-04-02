// COPYRIGHT Dassault Systemes 2005
//===================================================================
#ifndef CATIBlock_H
#define CATIBlock_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATConstraintModelerItf.h"
#include "CATBaseUnknown.h"

#include "CATLISTV_CATBaseUnknown.h"

class CATIBlock_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATConstraintModelerItf IID IID_CATIBlock;
#else
extern "C" const IID IID_CATIBlock ;
#endif

/**
 * Interface to manage blocks.
 * <b>Role</b>: This interface is used to manage blocks.
 * A CATIBlock can be a Product or a Fix Together constraint.
 * From the mechanical application point of view, the blocks represent
 * groups of mobile rigid objects.
 */
class ExportedByCATConstraintModelerItf CATIBlock: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  /**
   * Returns the list of sub blocks.
   * Any block has sub blocks, except for the leaf blocks.
   */
    virtual HRESULT ListBlocks( CATLISTV(CATBaseUnknown_var) & oListBlocks ) const = 0;
  /**
   * Returns the parent block.
   * Any block has one and only one parent block, except for the root block
   * which have no parent block.
   */
    virtual HRESULT GetParentBlock( CATIBlock_var & oParentBlock ) const = 0;
};

CATDeclareHandler( CATIBlock, CATBaseUnknown );

#endif
