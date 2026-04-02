#ifndef CATICciSequence_H
#define CATICciSequence_H

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003
//==============================================================================
//
// CATICciSequence :
//   Interface to manage a sequence.
//
//==============================================================================
// Usage Notes :
//
//------------------------------------------------------------------------------
//  Inheritance : CATICciSequence (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//==============================================================================

#include "CAACompositesItf.h"

#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByCAACompositesItf IID IID_CATICciSequence;
#else
extern "C" const IID IID_CATICciSequence;
#endif


/**
 * Interface to Sequence.
 * <b>Role</b>: Allows to manage a Composites Sequence feature, father of ply and
 * core objects.
 * @see CATICciPly, CATICciCore
 */
class ExportedByCAACompositesItf CATICciSequence : public CATBaseUnknown
{
    CATDeclareInterface;

public :
   
    /**
     * Gets the list of plies and cores that are in the sequence.
     * @param oListOfElements
     *   The list of plies and cores (CATICciPly or CATICciCore).
     */
    virtual HRESULT GetPliesAndCores(CATLISTV(CATBaseUnknown_var)& oListOfElements) = 0;

    /**
     * Sets the order of the plies and cores in the sequence.
     * @param iListOfPliesAndCores
     *   The list of plies (CATICciPly) and cores (CATICciCore) in the desired order inside the sequence
     */
    virtual HRESULT ReorderPliesAndCores( const CATLISTV(CATBaseUnknown_var)& iListOfPliesAndCores ) = 0;

};

CATDeclareHandler(CATICciSequence, CATBaseUnknown);

#endif
